class Solution {
    private:
    vector<int> nextsmallerelment(vector<int>& arr){
        stack<int>st;
        int n = arr.size();
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            int ch = arr[i];
            while(!st.empty() && arr[st.top()]>=ch){
                st.pop();
            }
            if(st.empty()){
                ans[i] = n;
            }else{
                ans[i]=st.top();
            }
            st.push(i);
        }
        return ans;
    }
     vector<int> presmallerelment(vector<int>& arr){
        stack<int>st;
        int n = arr.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            int ch = arr[i];
            while(!st.empty() && arr[st.top()]>=ch){
                st.pop();
            }
            if(st.empty()){
                ans[i] = -1;
            }else{
                ans[i]=st.top();
            }
            st.push(i);
        }
        return ans;
    }
public:
    int sumSubarrayMins(vector<int>& arr) {
      
     vector<int> nse = nextsmallerelment(arr);
     
       vector<int> pse = presmallerelment(arr);
   int mod = (int)(1e9+7);
      long long total = 0;
      for(int i=0;i<arr.size();i++){
        int left = i-pse[i];
        int right = nse[i]-i;
        total = (total + ((long long)arr[i] * left * right) % mod) % mod;   
           }
      return total;
        }
};