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
public:
  void inorder(TreeNode*root,int&ans,int&k,int&i){
    if(!root){
        return;
    }
    inorder(root->left,ans,k,i);
         if(i==k){
            ans=root->val;
         }
    i=i+1;
    inorder(root->right,ans,k,i);

  }
    int kthSmallest(TreeNode* root, int k) {
        int ans=0;
        int i=1;
        inorder(root,ans,k,i);
        return ans;
        
    }
};
