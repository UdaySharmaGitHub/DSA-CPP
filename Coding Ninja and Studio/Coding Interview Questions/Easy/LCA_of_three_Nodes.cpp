/*
LCA of three Nodes
Problem statement
You have been given a Binary Tree of 'N' nodes where the nodes have integer values and three integers 'N1', 'N2', and 'N3'. Find the LCA(Lowest Common Ancestor) of the three nodes represented by the given three('N1', 'N2', 'N3') integer values in the Binary Tree.
For example:
For the given binary tree: the LCA of (7,8,10) is 1
Note:
All of the node values of the binary tree will be unique.
N1, N2, and N3  will always exist in the binary tree.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 10
1 <= N <= 10^5
0 <= node data <= 10^9
0 <= N1 <= 10^9
0 <= N2 <= 10^9
0 <= N3 <= 10^9
Time Limit: 1sec
Sample Input 1:
1
8 9 11
1 2 3 4 5 6 7 8 9 -1 -1 -1 -1 -1 -1 10 -1 11 -1 -1 -1 -1 -1
Sample Output 1:
4
Sample Input 2:
2
7 8 2
1 2 3 4 5 6 7 8 9 -1 -1 -1 -1 -1 -1 10 -1 11 -1 -1 -1 -1 -1
5 6 7
1 2 3 4 5 6 7 8 9 -1 -1 -1 -1 -1 -1 10 -1 11 -1 -1 -1 -1 -1
Sample Output 2:
1
1
Explanation to Sample Input 2:
For both inputs, the binary tree will be represented as
For the first test case, the LCA of 7,8,2 in the given tree is 2 
For the second test case. the LCA of 5,6,7 in the given tree is 1,   
Hints:
1. Think of finding LCA from the paths to all three nodes.
*/
/**********************************************************
    Following is the Binary Tree Node class structure.

    template <typename T>
    class BinaryTreeNode {
    public :
	    T data;
	    BinaryTreeNode<T> *left;
	    BinaryTreeNode<T> *right;

	    BinaryTreeNode(T data) {
	        this -> data = data;
	        left = NULL;
	        right = NULL;
	    }
    };

***********************************************************/
BinaryTreeNode<int>* lcaOfThreeNodes(BinaryTreeNode<int>* root, int node1, int node2, int node3) {
    // Write your code here.
	if(!root) return root;
	if(root->data==node1 || root->data==node2 || root->data==node3) return root;

		BinaryTreeNode<int>* leftAns = lcaOfThreeNodes(root->left,node1,node2,node3);
BinaryTreeNode<int>* rightAns = lcaOfThreeNodes(root->right,node1,node2,node3);
if(leftAns && rightAns) return root;
else if(!leftAns && rightAns) return rightAns;
else if(leftAns && !rightAns) return leftAns;
else return NULL;

}
