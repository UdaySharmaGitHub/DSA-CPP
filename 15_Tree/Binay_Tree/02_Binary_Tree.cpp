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