/*
Given a Binary Search Tree. The task is to find the minimum valued element in this given BST.

Example 1:

Input:
           5
         /    \
        4      6
       /        \
      3          7
     /
    1
Output: 1
Example 2:

Input:
             9
              \
               10
                \
                 11
Output: 9
Your Task:
The task is to complete the function minValue() which takes root as the argument and returns the minimum element of BST. If the tree is empty, there is no minimum element, so return -1 in that case.

Expected Time Complexity: O(Height of the BST)
Expected Auxiliary Space: O(1).

Constraints:
0 <= N <= 104
*/
//{ Driver Code Starts
int minValue(Node* root) {
    // Code here
    if(root==NULL){
        return -1;
    }
    if(root->left==NULL){
        return root->data;
    }
    else{
        return minValue(root->left);
    }
}
//---------------------------------------------------------------------------------------------//
class Solution {
  public:
  void solve(Node* root,int &ans){
      if(!root) return ;
      ans = min(ans,root->data);
      solve(root->left,ans);
      solve(root->right,ans);
  }
    int getMode(Node* root) {
        // code here
        if(!root) return -1;
        int ans = INT_MAX;
        solve(root,ans);
        return ans;
    }
};