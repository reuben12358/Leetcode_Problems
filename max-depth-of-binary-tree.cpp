/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        /*
        Given a binary tree, find its maximum depth.

        The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

        Note: A leaf is a node with no children.
        */

        if (!root) {
            return 0;
        }
        
        int left = 1 + maxDepth(root->left);
        int right = 1 + maxDepth(root->right);
        
        if (left > right) {
            return left;
        }
        return right;
    }
};