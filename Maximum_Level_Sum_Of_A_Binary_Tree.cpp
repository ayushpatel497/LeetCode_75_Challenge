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
        void dfs(TreeNode* node, int level, vector<int>& nodeSum) {
        if (!node) {
            return;
        }
        if (nodeSum.size() == level) {
            nodeSum.push_back(node->val);
        } else {
            nodeSum[level] += node->val;
        }
        dfs(node->left, level + 1, nodeSum);
        dfs(node->right, level + 1, nodeSum);
    }
public:
    int maxLevelSum(TreeNode* root) {
        vector<int> nodeSum;
        dfs(root, 0, nodeSum);
        int maxx = INT_MIN;
        int lvl = 0;
        for (int i = 0; i < nodeSum.size(); i++) {
            if (maxx < nodeSum[i]) {
                maxx = nodeSum[i];
                lvl = i + 1;
            }
        }
        return lvl;
    }
};