/*
 Level Order Traversal
Problem statement
You have been given a Binary Tree of integers. You are supposed to return the level order traversal of the given tree.

For example:
For the given binary tree

The level order traversal will be {1,2,3,4,5,6,7}.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 100
0 <= N <= 1000
0 <= data <= 10^6 and data != -1
Where ‘T’ is the number of test cases, and ‘N’ is the total number of nodes in the binary tree, and “data” is the value of the binary tree node.

Time Limit: 1sec
Sample Input 1:
3
1 2 3 4 -1 5 6 -1 7 -1 -1 -1 -1 -1 -1
1 2 3 -1 -1 -1 -1
1 3 -1 2 -1 -1 -1
Sample Output 1:
1 2 3 4 5 6 7
1 2 3
1 3 2
#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    vector<int> ans;
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while(!q.empty()){
    BinaryTreeNode<int> * temp = q.front();
    q.pop();
    if(temp==nullptr){
        if(!q.empty()){q.push(nullptr);}
    }
    else{
        ans.push_back(temp->val);
    if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
    }
    return ans ;
}