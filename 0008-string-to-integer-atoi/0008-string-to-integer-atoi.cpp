class Solution {
public:
    int myAtoi(string s) {
        if(s.length()==0){
            return 0;
        }
        int i= 0 ;
        while(i<s.length()&& s[i]==' ')
        {
            
          i++;
            
        }
        int sign = +1;
        long ans = 0;
        if(s[i]=='-') {sign =-1; i++;}
          if(s[i]=='+') { i++;}
        int Min = INT_MIN;
        int Max = INT_MAX;
        // i = (sign=='-1' || sign=='+1')?1:0;
       while(i<s.length()){
            if(s[i]==' '|| !isdigit(s[i])) break;
             ans = ans*10+(s[i]-'0');
            if(sign==-1 && ans*-1<Min) return Min;
            if(sign == 1 && ans>Max) return Max;
            i++;
       }  
       return (int)(ans*sign); 
    }
};