/*
Given a binary tree, find its preorder traversal.

Example 1:

Input:
        1      
      /          
    4    
  /    \   
4       2
Output: 1 4 4 2 
Example 2:

Input:
       6
     /   \
    3     2
     \   / 
      1 2
Output: 6 3 1 2 2 

Your Task:
You just have to complete the function preorder() which takes the root node of the tree as input and returns an array containing the preorder traversal of the tree.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= Number of nodes <= 104
0 <= Data of a node <= 105
*/
//{ Driver Code Starts

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

//Function to return a list containing the preorder traversal of the tree.
/*
    APPROACH:
    Steps:
    1. Create a vector to store the result of the preorder traversal.
    2. If the root is null, return the empty result vector.
    3. Add the data of the root node to the result vector.
    4. Recursively call the preorder function on the left subtree and store the result in a vector.
    5. Insert the elements of the left subtree result vector into the result vector.
    6. Recursively call the preorder function on the right subtree and store the result in a vector.
    7. Insert the elements of the right subtree result vector into the result vector.
    8. Return the result vector.    

    Complexity Analysis.
    Time Complexity: O(N), we process each node once for traversal.
    Space Complexity: O(N), extra space used for storing preorder traversal and recursive stack.

*/
class Solution {
 public:
   vector<int> preOrder(Node* root) {
       // code here
       vector<int> res;
       if(!root) return res;
       res.push_back(root->data);
       vector<int> left = preOrder(root->left);
       res.insert(res.end(),left.begin(),left.end());
       vector<int> right= preOrder(root->right);
       res.insert(res.end(),right.begin(),right.end());
      
       return res;
   }
};
