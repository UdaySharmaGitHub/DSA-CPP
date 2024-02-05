#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/
/*
Sample Input 1:
7 8 -1
1 3 4 6 -1
Sample Output 1:
1 3 4 6 7 8 -1
Explanation of Input 1:
In this testcase, the first list is: 7 -> 8 -> NULL
The second list is: 1 -> 3 -> 4 -> 6 -> NULL
The final list would be: 1 -> 3 -> 4 -> 6 -> 7 -> 8 -> NULL
Sample Input 2:
5 -1
1 3 6 10 -1
Sample Output 2
1 3 5 6 10 -1
*/
//Function to merge two sorted linked list.
// Most Optimized Approach
// Time Complexity O(n)
// Space Complexity O(1)
Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    if(head1==nullptr && head2==nullptr){
        return nullptr;
    }
    if(head1==nullptr){
        return head2;
    }
    if(head2==nullptr){
        return head1;
    }
    Node* ans = new Node(-1);
    Node* temp = ans;
    while(head1!=nullptr && head2!=nullptr){
        if(head2->data > head1->data){
            temp->next = head1;
            temp = head1;
            head1=head1->next;
        }
        else{
             temp->next = head2;
            temp = head2;
            head2=head2->next;
        }
    }
         if(head1!=nullptr){
          temp->next = head1;
        }
        else{
            temp->next= head2;
        }
    ans = ans->next;
    return ans;
}  
// Next Optimized Approach
void insertAtTail(Node<int>* &tail,int x){
    Node<int>* node = new Node(x);
    tail->next=node;
    tail=node;
}
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if(first==nullptr && second==nullptr){
        return nullptr;
    }
    if(first==nullptr){
        return second;
    }
    if(second==nullptr){
        return first;
    }
    Node<int>* ans = new Node(-1);
    Node<int>* temp = ans;
    while(first!=nullptr && second!=nullptr){
        int x = first->data , y = second->data;
        if(x>y){
            insertAtTail(temp,y);
            second=second->next;
        }
        else{
            insertAtTail(temp,x);
            first=first->next;
        }
    }
    if(first!=nullptr){
        temp->next = first;
    }
    else{
        temp->next=second;
    }
    ans = ans->next;
    return ans;
}
