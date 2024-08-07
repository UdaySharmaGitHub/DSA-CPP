#include<bits/stdc++.h>
using namespace std;
// Initialization of BST
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->left= nullptr;
        this->right = nullptr;
    }
};
// Insert into BST;
Node* InsertIntoBST(Node*&root,int data){
    if(!root){
        root = new Node(data);
        return root;
    }
    // if may we get the duplicate values
    if(root->data ==data) return root;
    // if the data is greater than the root values;
    if(data > root->data ) root->right = InsertIntoBST(root->right,data);
    else root->left = InsertIntoBST(root->left,data);

    return root;
}
// Taking input from the user
void takesInput(Node*&root){
    int data;
    cin>>data;
    while(data!=-1){
        InsertIntoBST(root,data);
        cin>>data;
    }
}
//---------------------------------------------------SEARCHING IN BST ----------------------------------------------------------------//
// Searching using Iteration Method
//  Time Complexity O(n)
//  Space Complexity O(1)
bool searchIterative(Node* root, int x) {
    // Your code here
    Node* temp = root; 
    while(temp){
        if(temp->data == x) return 1;
        else if(temp->data <x) temp = temp->right;
        else temp = temp->left;
    }
    return 0;
}
// Searching using Recursion Method
//  Time Complexity O(n)
//  Space Complexity O(n)
bool searchRecursion(Node* root, int x) {
    // Your code here
    if(!root) return 0;
    if(root->data == x) return 1;
    if(root->data > x) return search(root->left,x);
    if(root->data < x) return search(root->right,x);
    
}
//------------------------------------------------- MIN/MAX element in BST ----------------------------------------------------------------------//
//  MIN ELEMENT IN BST
/*
    Using Iterations
Time Complexity O(n)
 Space Complexity O(1)
*/
class Solution {
  public:
    int minValue(Node* root) {
        // Code here
        if(!root) return -1;
        while(root->left) root = root->left;
        return root->data;
    }
};

//------------------------------------------------- TRAVERSAL ----------------------------------------------------------------------//
// Printind the BST in inorder Traversal We get the sorted Array or Sequence
void preorderTraversal(Node* root){
        if(!root) return;

        cout<<root->data<<" ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    
}
void inorderTraversal(Node* root){
    if(!root) return;
        inorderTraversal(root->left);
        cout<<root->data<<" ";
        inorderTraversal(root->right);
}
void postorderTraversal(Node* root){
    if(!root) return;
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout<<root->data<<" ";
}
int main(){
    Node* root = nullptr;
    takesInput(root);
    cout<<"Preorder Traversal : ";
    preorderTraversal(root);
    cout<<"Inorder Traversal : ";
    inorderTraversal(root); // the node data in sorted Order
    cout<<"Postorder Traversal : ";
    postorderTraversal(root);
    return 0 ;
}