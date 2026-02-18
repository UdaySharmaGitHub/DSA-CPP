// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Class to hold information
// about the subtree
class NodeValue {
public:
    int maxNode, minNode, maxSize;
    
    // Constructor to initialize
    // the NodeValue object
    NodeValue(int minNode, int maxNode, int maxSize) {
        this->maxNode = maxNode;
        this->minNode = minNode;
        this->maxSize = maxSize;
    }
};

class Solution {
private:
    // Helper function to find the
    // largest BST subtree recursively
    NodeValue largestBSTSubtreeHelper(TreeNode* root) {
        // An empty tree is a BST of size 0
        if (!root) {
            return NodeValue(INT_MAX, INT_MIN, 0);
        }
        
        // Get values from left and right
        // subtrees of the current tree.
        auto left = largestBSTSubtreeHelper(root->left);
        auto right = largestBSTSubtreeHelper(root->right);
        
        // Check if the current tree is a BST based
        // on its left and right subtrees' properties
        if (left.maxNode < root->val && root->val < right.minNode) {
            // It is a BST, update the values for the current tree
            return NodeValue(min(root->val, left.minNode),
                max(root->val, right.maxNode), left.maxSize + right.maxSize + 1);
        }
        
        // If the current tree is not a BST,
        // return values indicating invalid tree properties
        return NodeValue(INT_MIN, INT_MAX, max(left.maxSize, right.maxSize));
    }

public:
    // Function to find the size
    // of the largest BST subtree
    int largestBSTSubtree(TreeNode* root) {
        return largestBSTSubtreeHelper(root).maxSize;
    }
};