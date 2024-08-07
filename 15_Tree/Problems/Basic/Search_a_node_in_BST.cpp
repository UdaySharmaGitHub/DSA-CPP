/*
Given a Binary Search Tree and a node value X, find if the node with value X is present in the BST or not.
Example 1:
Input:         2
                \
                 81 
               /    \ 
             42      87 
              \       \ 
               66      90 
              / 
            45
X = 87
Output: 1
Explanation: As 87 is present in the
given nodes , so the output will be
1.
Example 2:
Input:      6
             \ 
              8 
             / \ 
            7   9
X = 11
Output: 0
Explanation: As 11 is not present in 
the given nodes , so the output will
be 0.
Your Task:
You don't need to read input or print anything. Complete the function search()which returns true if the node with value x is present in the BSTelse returns false.
Expected Time Complexity: O(Height of the BST)
Expected Auxiliary Space: O(1).
Constraints:
1 <= Number of nodes <= 105
*/
//{ Driver Code Starts
// Function to search a node in BST.
/*
    USING RECURSIONS
Time Complexity O(n)
Space Complexity O(n)
*/
bool search(Node* root, int x) {
    // Your code here
    if(!root) return 0;
    if(root->data == x) return 1;
    if(root->data > x) return search(root->left,x);
    if(root->data < x) return search(root->right,x);
}
//------------------------------------------------------------------------------------------------------------//
bool search(Node* root, int x) {
    // Your code here
    if(root==NULL){
        return 0;
    }
    if(root->data==x){
        return 1;
    }
    else if(x>root->data){
        return search(root->right,x);
    }
    else{
        return search(root->left,x);
    }
}
/*
    USING Iterative Methods
Time Complexity O(n)
Space Complexity O(1)
*/
bool search(Node* root, int x) {
    // Your code here
    Node* temp = root;
    while(temp){
        if(temp->data == x) return 1;
        else if(temp->data <x) temp = temp->right;
        else temp = temp->left;
    }
    return 0;
    
}