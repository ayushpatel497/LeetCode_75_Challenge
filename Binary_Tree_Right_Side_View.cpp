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
    vector<int> rightView;
    void dfs(TreeNode *root, int depth, int &maxDepth) {
        if (!root) return;
        if (depth >= maxDepth) {
            rightView.push_back(root->val);
            maxDepth++;
        }
        dfs(root->right, depth + 1, maxDepth);
        dfs(root->left, depth + 1, maxDepth);
        return;
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        int maxDepth = 0;
        dfs(root, 0, maxDepth);
        return rightView;
    }
};