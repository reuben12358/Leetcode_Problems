// Definition for a binary tree node.
#include <cmath>
#include <algorithm>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (!root)
            return true;
        return (abs(isBalancedHelper(root->left) - isBalancedHelper(root->right)) < 2) && isBalanced(root->left) && isBalanced(root->right);  
    }
    int isBalancedHelper(TreeNode* root) {
        if (!root) 
            return 0;
        return 1 + std::max(isBalancedHelper(root->left), isBalancedHelper(root->right));
    }
};