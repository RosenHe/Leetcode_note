/*
113. Path Sum II
Given the root of a binary tree and an integer targetSum,
return all root-to-leaf paths where each path's sum equals targetSum.

A leaf is a node with no children.
*/

class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> answer;
        vector<int> path;
        helper(root, answer, path, targetSum);
        return answer;
    }
    void helper(TreeNode* root, vector<vector<int>>& answer, vector<int>& path, int targetSum){
        if(!root) return;
        path.push_back(root->val);
        if(targetSum == root->val && !root->left &&!root->right){
            answer.push_back(path);
        }
        helper(root->left, answer, path, targetSum-root->val);
        helper(root->right, answer, path, targetSum-root->val);
        path.pop_back();//delete the last element.
    }
};
