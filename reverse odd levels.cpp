class Solution {
    public:
        void reverseodd(TreeNode* left, TreeNode* right, int level)
            {
                    if (!left || !right)
                                return;

                                        if (level % 2 == 1)
                                                    swap(left->val, right->val);

                                                            reverseodd(left->left, right->right, level + 1);
                                                                    reverseodd(left->right, right->left, level + 1);
                                                                        }

                                                                            TreeNode* reverseOddLevels(TreeNode* root) {
                                                                                    if (!root) return root;
                                                                                            reverseodd(root->left, root->right, 1);
                                                                                                    return root;
                                                                                                        }
                                                                                                        };
