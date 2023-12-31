/*
Given two Singly Linked List of N and M nodes respectively. The task is to check whether two linked lists are identical or not. 
Two Linked Lists are identical when they have same data and with same arrangement too.

Example 1:

Input:
LinkedList1: 1->2->3->4->5->6
LinkedList2: 99->59->42->20
Output: Not identical 
Example 2:

Input:
LinkedList1: 1->2->3->4->5
LinkedList2: 1->2->3->4->5
Output: Identical
 
Your Task:
The task is to complete the function areIdentical() which takes the head of both linked lists as arguments and returns True or False.

Constraints:
1 <= N <= 103

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)
*/
//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

bool areIdentical(struct Node *a, struct Node *b);


int main()
{
    int T;
    cin>>T;
    while(T--){
        int n1, n2, tmp , d1 , d2;
        struct Node *head1 = NULL , *tail1=NULL;
        struct Node *head2 = NULL , *tail2 =NULL;
        cin>>n1;
        cin>>d1;
        head1 = new Node(d1);
        tail1 = head1;
        while(n1-- > 1){
            cin>>tmp;
            tail1->next = new Node(tmp);
            tail1 = tail1->next;
        }
        cin>>n2;
        cin>>d2;
        head2 = new Node(d2);
        tail2 = head2;
        while(n2-- >1)
        {
            cin>>tmp;
            tail2->next = new Node(tmp);
            tail2 = tail2->next;
        }
        areIdentical(head1, head2)?cout<<"Identical"<<endl:cout<<"Not identical"<<endl;
        areIdenticalOptimized(head1, head2)?cout<<"Identical"<<endl:cout<<"Not identical"<<endl;
    }
	return 0;
}

// } Driver Code Ends
//Function to check whether two linked lists are identical or not. 
//-----------------method -1 ---------------------------------------------//
// Expected Time Complexity : O(N)
// Expected Auxilliary Space : O(1)
int length(struct Node* head){
    Node* temp = head;
    int i = 0;
    while(temp!=NULL){
        i++;
        temp=temp->next;
    }
    return i;
}
bool areIdentical(struct Node *head1, struct Node *head2)
{
    Code here
    if(length(head1)!=length(head2)){
        return 0;
    }
    while(head1!=NULL && head2!=NULL){
        if(head1->data!=head2->data){
            return 0;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return 1;
}
//-----------------method-2 Optimized ---------------------------------------------//
// Expected Time Complexity : O(N)
// Expected Auxilliary Space : O(1)
bool areIdenticalOptimized(struct Node *head1, struct Node *head2)
{
    while(head1!=NULL && head2!=NULL){
        if(head1->data!=head2->data){
            return 0;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return (head1==NULL && head2==NULL);
}