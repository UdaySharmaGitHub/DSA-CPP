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
	while(!q.empty()){
		node * temp = q.front();
		cout<<temp->data<<" ";
		q.pop();

		if(temp->left){
			q.push(temp->left);
		}
		if(temp->right){
			q.push(temp->right);
		}
	}
}


int main(){
	node * root = nullptr;
	root = buildTree(root);
	//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1  
	//level order
	cout<<"Printing the Level Order Traversal :"<<endl;
	levelOrderTraversal(root);

	return 0;
}