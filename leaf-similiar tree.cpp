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
       void generate_leaf(TreeNode*root,vector<int>&v){
      if(!root){
        return;
      }
      if(root->left==NULL&&root->right==NULL){
        v.emplace_back(root->val);
      }
            generate_leaf(root->left,v);
            generate_leaf(root->right,v);

       }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1;
        vector<int>v2;
        generate_leaf(root1,v1);
        generate_leaf(root2,v2);
        return v1==v2;

    }
};
