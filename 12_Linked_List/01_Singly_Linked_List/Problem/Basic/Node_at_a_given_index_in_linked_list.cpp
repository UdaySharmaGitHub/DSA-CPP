/*
Given a singly linked list with N nodes and a number X. The task is to find the node at the given index (X)(1 based index) of linked list. 

Input:
First line of input contains number of testcases T. For each testcase, first line of input contains space seperated two integers, length of linked list and X.

Output:
For each testcase, there will be single line of output containing data at Xth node.

User Task:
The task is to complete the function GetNth() which takes head reference and index as arguments and should return the data at Xth position in the linked list.

Constraints:
1 <= T <= 30
1 <= N <= 100
X <= N
1 <= value <= 103

Example:
Input:
2
6 5
1 2 3 4 657 76
10 2
8 7 10 8 6 1 20 91 21 2

Output:
657
7

Explanation:
Testcase 1: Element at 5th index in the linked list is 657 (1-based indexing).
*/
//{ Driver Code Starts
// C program to find n'th node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
 
/* Link list node */
struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
};
 
struct node* push(struct node* head, int d)
{
   
    struct node* new_node =
            (struct node*) malloc(sizeof(struct node));

    new_node->data  = d;
    new_node->next = NULL;
    
    if (head == NULL) return new_node;
    
    struct node* h = head;
    while (head->next != NULL) head = head->next;
    head->next = new_node;
    
    return h;
}

int GetNth(struct node* head, int index);


/* Driver program to test above function*/
int main()
{
  int T,i,n,l,k;
    
    cin>>T;
    
    while(T--){
    struct node *head = NULL;
        
        cin>>n>>k;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            head = push(head, l);
        }
   
    printf("%d\n", GetNth(head, k));  
    getchar();
    }
    return 0;
}
 
// } Driver Code Ends
// Should return data of node at given index. The function may
//  assume that there are at least index+1 nodes in linked list
/*
=> Method-2 : - without using Recursion
Algorithm: 
1. Initialize count = 0
2. Loop through the link list
     a. if the count is equal to the passed index then return the current
         node
     b. Increment count
     c. change current to point to next of the current.
Time Complexity: O(n)
Auxiliary Space: O(1) space created for variables
*/
int GetNth(struct node* head, int index){
  // Code here
  int i = 0;
  while(i<index-1){
       head=head->next;
       i++;
  }
  return head->data;
}
/*
=> Method-2 :- using Recursion
Algorithm:-
getnth(node,n)
1. Initialize count = 0
2. if count==n
     return node->data
3. else
    return getnth(node->next,n-1)
Time Complexity : O(n) 
Auxiliary Space: O(n) due to recursive calls.
*/
int GetNth(struct Node* head, int n) 
{ 
    // if length of the list is less 
    // than the given index, return -1 
    if (head == NULL) 
        return -1; 
  
    // if n equal to 0 return node->data 
    if (n == 0) 
        return head->data; 
  
    // increase head to next pointer 
    // n - 1: decrease the number of recursions until n = 0 
    return GetNth(head->next, n - 1); 
} 