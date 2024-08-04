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
// Printind the BST in inorder Traversal We get the sorted Array or Sequence
void inorderTraversal(Node* root){
    if(root){
        inorderTraversal(root->left);
        cout<<root->data<<" ";
        inorderTraversal(root->right);
    }
}
int main(){
    Node* root = nullptr;
    takesInput(root);
    inorderTraversal(root); // the node data in sorted Order
    return 0 ;
}