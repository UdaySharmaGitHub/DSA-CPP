/*
Add 1 to a number represented as linked list
A number N is represented in Linked List such that each digit corresponds to a node in linked list. You need to add 1 to it.

Example 1:

Input:
LinkedList: 4->5->6
Output: 457
Explanation: 4->5->6 represents 456 and when 1 is added it becomes 457. 
Example 2:

Input:
LinkedList: 1->2->3
Output: 124 
Your Task:
Your task is to complete the function addOne() which takes the head of the linked list as the only argument and returns the head of the modified linked list. The driver code prints the number.
Note: The head represents the left-most digit of the number.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 1021
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
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    private:
    Node* reverse(Node* head){
        Node* curr = head;
        Node* prev = nullptr;
        Node* nxt = nullptr;
        while(curr!=nullptr){
            nxt= curr->next;
            curr->next= prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    void insertAtTail(Node* &head,Node* &tail,int x){
        Node* node = new Node(x);
        if(head==nullptr){
            head =node;
            tail = node;
            return ;
        }
        tail->next = node;
        tail =node;
    }
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node* ansHead = nullptr , *ansTail = nullptr;
        int addOne =1;
    head =reverse(head);
    int carry = 0 ;
    while(head!=nullptr  || carry!=0){
        int val = 0 ;
        if(head!=nullptr){
            val = head->data;
        }
        int sum = addOne+val+carry;
        int digit = sum%10;
        carry = sum/10;
        insertAtTail(ansHead,ansTail,digit);
                if(addOne==1){
            addOne--;   
        }
        if(head!=nullptr){
            head=head->next;
        }
    }
    ansHead  = reverse(ansHead);
    return ansHead;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends