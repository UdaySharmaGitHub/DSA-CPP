/*
Given a binary tree. Find the inorder traversal of the tree without using recursion.
Constraints:
1 ≤ Number of nodes ≤ 105
1 ≤ Node data ≤ 105
*/
/*
    Approach: Iterative using Stack
    Steps:
    1. Initialize an empty stack and set the current node to the root.
    2. While the stack is not empty or the current node is not null:
        a. Traverse the left subtree by pushing the current node onto the stack and moving to its left child until reaching a null node.
        b. Pop the top node from the stack, add its value to the result list, and move to its right child.
    3. Repeat step 2 until all nodes are visited.
    4. Return the result list containing the inorder traversal of the binary tree.

        Time Complexity: O(n), where n is the number of nodes in the binary tree. Each node is visited exactly once.
        Space Complexity: O(h), where h is the height of the binary tree. This is the space required for the stack to store the nodes during traversal.

*/
class Solution {
  public:
    vector<int> inOrder(Node* root) {
        // code here
        stack<Node*> st;
        Node* curr = root;
        vector<int> res;
        while(!st.empty() || curr){
            while(curr){ st.push(curr); curr= curr->left;}
            curr = st.top();
            st.pop();
            res.push_back(curr->data);
            curr=curr->right;
        }
        return res;
    }
};