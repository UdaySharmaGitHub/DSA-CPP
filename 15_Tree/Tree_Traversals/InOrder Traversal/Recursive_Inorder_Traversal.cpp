/*
Given a Binary Tree, find the In-Order Traversal of it.

Example 1:

Input:
       1
     /  \
    3    2
Output: 3 1 2

Example 2:

Input:
        10
     /      \ 
    20       30 
  /    \    /
 40    60  50
Output: 40 20 60 10 50 30

Your Task:
You don't need to read input or print anything. Your task is to complete the function inOrder() that takes root node of the tree as input and returns a list containing the In-Order Traversal of the given Binary Tree.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= Number of nodes <= 105
0 <= Data of a node <= 105
*/
// } Driver Code Ends
/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; */
/*
        APPROACH: Recursive
        Time Complexity: O(N), where N is the number of nodes in the binary tree. Each node is visited exactly once during the traversal.
        Space Complexity: O(N), where N is the number of nodes in the binary tree. The space is used for the recursion stack and the vector to store the inorder traversal result.
*/
class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        // Your code here
    vector<int> ans;
    if (root == NULL) return ans;
    vector<int> left = inOrder(root->left);
    ans.insert(ans.end(), left.begin(), left.end());
    ans.push_back(root->data);
    vector<int> right = inOrder(root->right);
    ans.insert(ans.end(), right.begin(), right.end());
    return ans;
    }
};
