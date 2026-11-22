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
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        std::stack<std::pair<TreeNode*, int>> dfs = {};
        dfs.push({root, 1});
        TreeNode* node = root;
        int level = 0;
        int maxLevel = 0;
        while(dfs.empty() == false){
            node = dfs.top().first;
            level = dfs.top().second;
            dfs.pop();
            if(level > maxLevel) maxLevel = level;
            if(node->left) dfs.push({node->left, level+1});
            if(node->right) dfs.push({node->right, level+1});
        }
        return maxLevel;
    }
};
