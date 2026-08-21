/*
Given a binary tree, find the Postorder Traversal of it.
For Example, the postorder traversal of the following tree is:
5 10 39 1

        1
     /     \
   10     39
  /
5
Example 1:
Input:
        19
     /     \
    10      8
  /    \
 11    13
Output: 11 13 10 8 19
Example 2:
Input:
          11
         /
       15
      /
     7
Output: 7 15 11
Your Task:
You don't need to read input or print anything. Your task is to complete the function postOrder() that takes root node as input and returns an array containing the postorder traversal of the given Binary Tree.
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
Constraints:
1 <= Number of nodes <= 105
0 <= Data of a node <= 106
*/
//{ Driver Code Starts
//Initial Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

//Function to return a list containing the postorder traversal of the tree.
/*
    Complexity Analysis.
    Time Complexity: O(N), we process each node once in traversal.
    Space Complexity: O(N), extra space used for storing post order traversal and recursion stack space.
*/
class Solution {
  public:
    vector<int> postOrder(Node* root) {
        // code here
        vector<int> res;
        if(!root) return res;
        vector<int> left = postOrder(root->left);
        res.insert(res.end(),left.begin(),left.end());
        
        vector<int> right = postOrder(root->right);
        res.insert(res.end(),right.begin(),right.end());
        
        res.push_back(root->data);
        
        return res;
    }
};
