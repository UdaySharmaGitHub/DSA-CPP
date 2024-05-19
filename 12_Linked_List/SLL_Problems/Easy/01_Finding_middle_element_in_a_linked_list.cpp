/*
Given a singly linked list of N nodes.
The task is to find the middle of the linked list. For example, if the linked list is
1-> 2->3->4->5, then the middle node of the list is 3.
If there are two middle nodes(in case, when N is even), print the second middle element.
For example, if the linked list given is 1->2->3->4->5->6, then the middle node of the list is 4.

Example 1:

Input:
LinkedList: 1->2->3->4->5
Output: 3 
Explanation: 
Middle of linked list is 3.
Example 2: 

Input:
LinkedList: 2->4->6->7->5->1
Output: 7 
Explanation: 
Middle of linked list is 7.
Your Task:
The task is to complete the function getMiddle() which takes a head reference as the only argument and should return the data at the middle node of the linked list.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 5000
*/
//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getLength(Node* head){
        Node* temp = head;
        int count = 0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
/*
Method 1: 
Traverse the whole linked list and count the no. of nodes. Now traverse the list again till count/2 and return the node at count/2. 
Below is the implementation of the above approach:
First Approach to Get the length of the Linked List 
and Find the Middle using Size_of_LinkedList/2 then traverse the linked List less than the index
And return the head->data or node (as Required);
Time Complexity: O(n) where n is no of nodes in linked list
Auxiliary Space: O(1)
*/
    int getMiddle(Node *head)
    {
        // Your code here
        Node * temp =head;
        int mid = getLength(head)/2;
        int i = 0 ;
        while(i<mid){
            temp = temp->next;
            i++;
        }
        return temp->data;
    }

/*
Method-2
Second Approach Easy And Brute Force Way:
The Approach:
Here in this approach, we use O(n) extra space 
for vector to store the linked list values and we simply return middle value of vector.
to craete a vector array to store the data part of the Linked List
get the middle element using the mid =vector_name.size()/2 and return the vector_name[mid].
Time Complexity: O(n), for traversing.
Auxiliary Space: O(n), for Vector.
*/
       int getMiddle2(Node *head)
    {
        // Your code here
       vector<int>v;
    while(head!=NULL){
     v.push_back(head->data);
     head=head->next;
    }
    return v[v.size()/2];
    }
/*
Method-3
by using two pointer (slow and fast pointer)
In this first pointer moves one step at time
In this second pointer moves two step at time
we fast become null its means the slow pointer is in the middle of LinkedList
*/
Node *findMiddle(Node * head){
    if(head->next==nullptr || head==nullptr){
        return head;
    }
    if(head->next->next==nullptr){
        return head->next;
    }
    Node* slow = head;
    Node* fast = head->next;
    while(fast!=nullptr){
  fast = fast->next;
  if(fast!=nullptr){fast=fast->next;}
  slow=slow->next;
    }
    return slow;
}

};


//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        cout << ob.getMiddle(head) << endl;
    }
    return 0;
}

// } Driver Code Ends