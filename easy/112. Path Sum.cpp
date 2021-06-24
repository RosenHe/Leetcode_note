/*
    112. Path Sum
Given the root of a binary tree and an integer targetSum,
return true if the tree has a root-to-leaf path such that adding up
all the values along the path equals targetSum.

A leaf is a node with no children.
*/
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetsum) {
        if(!root) return false;
        if(!root->left && !root ->right && root->val == targetsum) return true;
        return hasPathSum(root->left,targetsum-root->val) || hasPathSum(root->right, targetsum-root->val);
    }
};
