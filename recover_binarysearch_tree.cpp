class Solution {
public:
    TreeNode* prev = NULL;
    TreeNode* pre = new TreeNode(INT_MIN);
    TreeNode* middle = NULL;
    TreeNode* last = NULL;

    void inorder(TreeNode* root) {
        if (!root) {
            return;
        }

        inorder(root->left);

        if (root->val < pre->val) {
            if (prev == NULL) {
                prev = pre;
                middle = root;
            } else {
                last = root;
            }
        }

        pre = root;

        inorder(root->right);
    }

    void recoverTree(TreeNode* root) {
        inorder(root);
        if (last == NULL) {
            int temp = prev->val;
            prev->val = middle->val;
            middle->val = temp;
        } else {
            int temp2 = prev->val;
            prev->val = last->val;
            last->val = temp2;
        }
    }
};
