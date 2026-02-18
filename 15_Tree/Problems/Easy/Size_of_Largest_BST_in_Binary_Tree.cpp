/*
Problem statement
You have been given a Binary Tree of 'N' nodes, where the nodes have integer values. Your task is to return the size of the largest subtree of the binary tree which is also a BST.
A binary search tree (BST) is a binary tree data structure which has the following properties.
• The left subtree of a node contains only nodes with data less than the node’s data.
• The right subtree of a node contains only nodes with data greater than the node’s data.
• Both the left and right subtrees must also be binary search trees.
Example:
Given binary tree:
In the given binary tree, subtree rooted at 2 is a BST and its size is 3.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
2 1 3 -1 -1 -1 -1
Sample Output 1:
3
Explanation for Sample 1:
In the given binary tree, subtree rooted at 2 is a BST and its size is 3.

Sample Input 2 :
50 -1 20 -1 30 -1 40 -1 50 -1 -1
Sample Output 2:
4
Constraints :
1 <= 'N' <= 10^5
0 <= 'data' <= 10^5     
where 'N' is the number of nodes and 'data' denotes the node value of the binary tree nodes.
Time limit: 1 sec
*/
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
class Info{
    public: 
    int maxi;
    int mini;
    bool isBST;
    int size ;
};
Info solve(TreeNode* root,int &maxSize){
    // base Case;
    if(!root) return {INT_MIN,INT_MAX,true,0};
    Info left = solve(root->left,maxSize);
    Info right = solve(root->right,maxSize);
    
    Info currNode;
    currNode.size = left.size + 1 + right.size;
    currNode.maxi = max(root->data,right.maxi);
    currNode.mini = min(root->data,left.mini);
    currNode.isBST = ((root->data < right.mini && root->data > left.maxi) && left.isBST && right.isBST)?true:false;

    if(currNode.isBST){
        maxSize = max(maxSize,currNode.size);
    }
    return currNode;

}
int largestBST(TreeNode * root){
    // Write your code here.
    int maxSize = 0 ;
    Info temp = solve(root,maxSize);
    return maxSize;
}