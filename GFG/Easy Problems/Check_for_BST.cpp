/*
Check for BST
Given the root of a binary tree. Check whether it is a BST or not.
Note: We are considering that BSTs can not contain duplicate Nodes.
A BST is defined as follows:

The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
 

Example 1:

Input:
   2
 /    \
1      3
Output: 1 
Explanation: 
The left subtree of root node contains node
with key lesser than the root nodes key and 
the right subtree of root node contains node 
with key greater than the root nodes key.
Hence, the tree is a BST.
Example 2:

Input:
  2
   \
    7
     \
      6
       \
        5
         \
          9
           \
            2
             \
              6
Output: 0 
Explanation: 
Since the node with value 7 has right subtree 
nodes with keys less than 7, this is not a BST.
Your Task:
You don't need to read input or print anything. Your task is to complete the function isBST() which takes the root of the tree as a parameter and returns true if the given binary tree is BST, else returns false. 

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the BST).

Constraints:
0 <= Number of edges <= 100000
*/
/*
    - If the current node is null then return true
    - If the value of the left child of the node is greater than or equal to the current node then return false
    - If the value of the right child of the node is less than or equal to the current node then return false
    - If the left subtree or the right subtree is not a BST then return false
    - Else return true
Note: It is assumed that you have helper functions minValue() and maxValue() that return the min or max int value from a non-empty tree

Time Complexity: O(N2), As we visit every node just once and our helper method also takes O(N) time, so overall time complexity becomes O(N) * O(N) = O(N2)
Auxiliary Space: O(H), Where H is the height of the binary tree, and the extra space is used due to the function call stack.
*/
class Solution
{
    public:
    int maxValue(Node* node)
{
    if (node == NULL) {
        return INT16_MIN;
    }
    int value = node->data;
    int leftMax = maxValue(node->left);
    int rightMax = maxValue(node->right);
 
    return max(value, max(leftMax, rightMax));
}

    int minValue(Node* node)
{
    if (node == NULL) {
        return INT16_MAX;
    }
    int value = node->data;
    int leftMax = minValue(node->left);
    int rightMax = minValue(node->right);
 
    return min(value, min(leftMax, rightMax));
}
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* node) 
    {
  if (node == NULL)
        return 1;
 
    /* false if the max of the left is > than us */
    if (node->left != NULL
        && maxValue(node->left) >= node->data)
        return 0;
 
    /* false if the min of the right is <= than us */
    if (node->right != NULL
        && minValue(node->right) <= node->data)
        return 0;
 
    /* false if, recursively, the left or right is not a BST
     */
    if (!isBST(node->left) || !isBST(node->right))
        return 0;
 
    /* passing all that, it's a BST */
    return 1;
        
    }
};