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
   void pre(TreeNode*root,vector<TreeNode*>&v){

    if(!root){
        return;
    }

    v.emplace_back(root);
    pre(root->left,v);
    pre(root->right,v);





   }
   void flat(TreeNode*root,vector<TreeNode*>&v,int i){
    if(i>=v.size()){

        return;
    }


    root=v[i];
    root->left=NULL;
    if(i+1<v.size())
    root->right=v[i+1];
    else{
        root->right=NULL;
    }
     flat(root,v,i+1);
    
   }
    void flatten(TreeNode* root) {
        if(!root){
            return;
        }
      vector<TreeNode*>v;
      pre(root,v);
      flat(root,v,0);
      
    }
};
