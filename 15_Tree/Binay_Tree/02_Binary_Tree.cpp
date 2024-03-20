#include <bits/stdc++.h>
using namespace std;
class node {
public:
	int data;
	node* left;
	node* right;
	// Val is the key or the value that
	// has to be added to the data part
	node(int val)
	{
		data = val;
		// Left and right child for node
		// will be initialized to null
		left = NULL;
		right = NULL;
	}
};

//-----------------------------------------Build Tree ---------------------------------------//
node *buildTree(node* root){
	cout<<"Enter the data : "<<endl;
	int data;
	cin>>data;
	root = new node(data);
	if(data==-1){return nullptr;}

	cout<<"Enter the data for inserting left of "<< data <<endl;
	root->left = buildTree(root->left);
	cout<<"Enter the data for inserting right of "<< data <<endl;
	root->right = buildTree(root->right);

	return root;
}
//-----------------------------------------Traversal---------------------------------------//
//----------------------------Level Order Traversal---------------------------------------//
void levelOrderTraversal(node* root){
	queue<node*> q;
	q.push(root);
	q.push(nullptr);
	while(!q.empty()){
		node * temp = q.front();
		q.pop();
		if(temp==nullptr){
			// Queue Level is Already Traverse
			cout<<endl;
			if(!q.empty()){
				// Queue has some chid left
				q.push(nullptr);
			}
		}
		else{
		cout<<temp->data<<" ";

			if(temp->left){
			q.push(temp->left);
		}
		if(temp->right){
			q.push(temp->right);
		}
		}
	}
}
//----------------------------InOrder Traversal---------------------------------------//
void inOrder(node* root){
	if(root==nullptr){
		return ;
	}
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}
//----------------------------PreOrder Traversal---------------------------------------//
void preOrder(node* root){
	if(root==nullptr){
		return ;
	}
	cout<<root->data<<" ";
	preOrder(root->left);
	preOrder(root->right);
}
//----------------------------PostOrder Traversal---------------------------------------//
void postOrder(node* root){
	if(root==nullptr){
		return ;
	}
	postOrder(root->left);
	postOrder(root->right);
	cout<<root->data<<" ";
}
//----------------------------Build Tree From Level Order---------------------------------------//
node* buildFromLevelOrder(node* &root){
	queue<node*> q;
	int data;
	cout<<"Enter the data for the root : "<<endl;
	cin>>data;
	root = new node(data);
	q.push(root);

	while(!q.empty()){
		node* temp  = q.front();
		q.pop();

		cout<<"enter the left node of "<<temp->data<<endl;
		cin>>data;
		if(data!=-1){
			temp->left = new node(data);
			q.push(temp->left);
		}

		cout<<"enter the right node of "<<temp->data<<endl;
		cin>>data;
		if(data!=-1){
			temp->right = new node(data);
			q.push(temp->right);
		}
	}
}
//----------------------------------------------Count Leaves Node ---------------------------------------------------//
 void countLeaf(node* root , int &count){
     if(root==nullptr){return ;}
     
     if(root->left == nullptr && root->right==nullptr) count++;
     countLeaf(root->left,count);
     countLeaf(root->right,count);
 }
int countLeaves(node* root)
{
  // Your code here
  int count =0;
  countLeaf(root,count);
  return count ;
}
//----------------------------------Heigth of Binary Tree---------------------------------------------//
int heightBinaryTree(node* root){
	if(root==nullptr){return 0;}

	int heightOfLeftSubTree = heightBinaryTree(root->left);
	int heightOfrightSubTree = heightBinaryTree(root->right);
	int ans = max(heightOfLeftSubTree,heightOfrightSubTree) + 1;
	return ans;
}
int main(){
	node * root = nullptr;
	// root = buildTree(root);
	// //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1  
	// //level order
	// cout<<"Printing the Level Order Traversal :"<<endl;
	// levelOrderTraversal(root);
	// inOrder(root);
	// preOrder(root);
	// postOrder(root);

	buildFromLevelOrder(root);
	levelOrderTraversal(root);
	cout<<countLeaves(root)<<endl;
	cout<<"The Height of Binary Tree : "<< heightBinaryTree(root)<<endl;

	return 0;
}