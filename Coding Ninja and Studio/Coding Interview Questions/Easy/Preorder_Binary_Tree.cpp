/*
Preorder Binary Tree
Problem statement
You are given a ‘Binary Tree’.
Return the preorder traversal of the Binary Tree.
Example:
Input: Consider the following Binary Tree:
Output: 
Following is the preorder traversal of the given Binary Tree: [1, 2, 5, 3, 6, 4]
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
1 2 3 5 4 6 7 -1 -1 -1 -1 -1 -1 -1 -1
 Sample Output 1:
1 2 5 4 3 6 7
Explanation of Sample Input 1:
The Binary Tree given in the input is as follows:
Sample Input 2:
5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
 Sample Output 2:
5 6 2 3 9 10
Explanation of Sample Input 2:
The Binary Tree given in the input is as follows:
Expected Time Complexity:
Try to do this in O(n).
Constraints:
1 <= n <= 100000
where 'n' is the number of nodes in the binary tree.

Time Limit: 1 sec
*/
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> preOrder(TreeNode<int> * root){
    // Write your code here.
    vector<int> ans;
    if(root!=nullptr){
        ans.push_back(root->data);
        vector<int> left = preOrder(root->left);
        ans.insert(ans.end(),left.begin(),left.end());
        vector<int> right = preOrder(root->right);
         ans.insert(ans.end(),right.begin(),right.end());
    }
    return ans;
}
