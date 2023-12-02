/*
    Following is the Binary Tree node structure:

    template <typename T>
    class BinaryTreeNode
    {
    public:
        T data;
        BinaryTreeNode<T> *left, *right;
        BinaryTreeNode() : data(0), left(NULL), right(NULL) {}
        BinaryTreeNode(T x) : data(x), left(NULL), right(NULL) {}
        BinaryTreeNode(T x, BinaryTreeNode<T> *left, BinaryTreeNode<T> *right) : data(x), left(left), right(right) {}
    };

*/

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.
 while(root!=NULL){
    if(root->data==x) return 1;
    if(root->data < x) root=root->right;
    else root=root->left;
 }
    return 0;
}
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    if(!root) return false;
    if(root->data == x) return true;

    if(root->data > x) searchInBST(root->left, x);
    else searchInBST(root->right, x);
}