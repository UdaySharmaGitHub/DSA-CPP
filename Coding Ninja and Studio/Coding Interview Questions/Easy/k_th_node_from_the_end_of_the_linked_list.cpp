/*
Sample Input 1 :
2
43 6 9 1 5 -1
4
3 7 -32 8 11 -1
5
Sample Output 1 :
6
3
Explanation Of Sample Input 1 :
First Test Case : 

The given linked list is: 43->6->9->1->5
We can clearly see that the 4th element from the last is 6 therefore we return a pointer pointing to the element ‘6’.

Second Test Case :

The linked list in this case is 3->7->-32->8->11
The 5th element from last is the first node of the list therefore we return a pointer pointing to the first node i.e. ‘3’
Sample Input 2 :
1
2 26 35 5 -1
1
Sample Output 2 :
5
*/
#include <bits/stdc++.h> 
/*

Following is the Node Structure written below
 
class node
{
	public:
	int data;
    node * next;
	node(int x)
	{
		data=x;
		next=NULL;
	}
};
*/
int length(node* head){
	int count = 0 ;
	while(head!=NULL){
		count++;
		head=head->next;
	}
	return count;
}
node *findKthFromLast(node *head, int k)
{
	//Write your Code Here
	int n = length(head);
	int tn = n-k;
	int i = 0 ;
	while(i<tn){
		head=head->next;
		i++;
	}
return head;

}
