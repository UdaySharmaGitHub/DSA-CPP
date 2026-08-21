/*
Inorder_Traversal_(Iterative_OR_Morris_traversal)
Given a Binary tree. Find the preorder traversal of the tree without using recursion.
Example 1:
Input:
           1
         /   \
        2     3
      /  \
     4    5
Output: 1 2 4 5 3
Explanation:
Preorder traversal (Root->Left->Right) of 
the tree is 1 2 4 5 3.
Example 2
Input:
            8
          /   \
         1      5
          \    /  \
           7  10   6
            \  /
            10 6
Output: 8 1 7 10 5 10 6 6 
Explanation:
Preorder traversal (Root->Left->Right) 
of the tree is 8 1 7 10 5 10 6 6.
Your task:
You don't need to read input or print anything. Your task is to complete the function preOrder() which takes the root of the tree as input and returns a list containing the preorder traversal of the tree, calculated without using recursion.
Expected time complexity: O(N)
Expected auxiliary space: O(N)
Constraints:
1 ≤ Number of nodes ≤ 105
1 ≤ Data of a node ≤ 105
*/
//User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};
*/
/*
    APPROACH:
    Steps:
    1. Create a stack to store the nodes of the tree.
    2. Create a vector to store the result of the preorder traversal.
    3. Create a pointer to the current node and initialize it to the root of the tree.
    4. While the stack is not empty or the current node is not null,
        a. While the current node is not null,
            i. Push the current node to the stack.
            ii. Add the data of the current node to the result vector.
            iii. Move the current node to its left child.
        b. Pop the top node from the stack and set it as the current node.
        c. Move the current node to its right child.
    5. Return the result vector.    
    
    Complexity Analysis
    Time Complexity: O(N), where N is the number of nodes in the binary tree. Each node is visited once during the traversal.
    Space Complexity: O(H), where H is the height of the binary tree. The space is used by the stack to store nodes during traversal.

*/
class Solution {
 public:
   vector<int> preOrder(Node* root) {
       // code here
       stack<Node*> st;
       vector<int> res;
       Node* curr  =root;
       while(!st.empty() || curr){
           while(curr){
               st.push(curr) ;
                res.push_back(curr->data);
               curr= curr->left;
           }
           curr = st.top();
           st.pop();
           curr= curr->right;
       }
       return res;
   }
};
