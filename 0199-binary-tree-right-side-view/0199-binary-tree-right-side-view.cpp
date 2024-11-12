/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    private:
    void traverseleft(TreeNode* root,vector<int> &ans){
        if(root==NULL ){
            return ;
        }
        ans.push_back(root->val);
        if(root->left){
            traverseleft(root->left,ans);
        }
        else{
            traverseleft(root->right,ans);
        }
    }
      void traverseright(TreeNode* root,vector<int> &ans){
       if(root==NULL){
            return ;
        }
         ans.push_back(root->val);
        if(root->right){
            traverseright(root->right,ans);
        }
        else{
            traverseright(root->left,ans);
        }
       
    }
public:
    vector<int> rightSideView(TreeNode* root) {
         vector<int> ans;
        if(root==NULL){
            return ans;
            
        }
        ans.push_back(root->val);
        if(root->right){
        traverseright(root->right,ans);
        }
        else{
            traverseleft(root->left,ans);
        }
          return ans;
    }
};