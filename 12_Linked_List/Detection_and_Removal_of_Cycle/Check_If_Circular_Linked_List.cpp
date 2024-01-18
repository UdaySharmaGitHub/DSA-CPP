#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    // Contructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    // destructor
    ~Node(){
        int value = this->data;
        // Memroy Free
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memroy is free for node with data: "<<value<<endl;
     }
};
// Traversal of the Singly Linked List
//   Time Complexity O(n)
void LinkedListTraversal(Node* head){
  if(head==nullptr){
    cout<<"Nothing to Traverse"<<endl;
    return;
  }
  Node* temp = head;
  do{
  cout<<temp->data<<"->";
  temp=temp->next;
  }while(temp!=head);
  cout<<"NULL"<<endl;
}
//----------------------------Insertion at the end or tail -----------------------------//
// Time Complexity: O(n)
// Auxiliary Space: O(1)
void InsertAtTail(Node* &head,int n){
    Node* node  = new Node(n);
    if(head==NULL){
        head = node;
    }
    else{
        Node * temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = node;
        node->next=NULL;
    }
}
// Used Make Cycle Function 
void makeCicularLinkedList(Node* &head){
    Node* temp = head;
    int i=1;
    while(temp->next!=nullptr){ // stop at last node
        temp = temp->next; // traverse the temp pointer
    }
    temp->next=head; // connect the last node to the startNode to Create Cycle
}
// Check whether the LinkedList is Circular or not
bool isCircular(Node *head)
{
   // Your code here
   if(head==nullptr){return 1;}
   Node* temp = head->next;
   while(temp!=head && temp!=nullptr){
       temp=temp->next;
   }
   if(temp==head){
       return 1;
   }
   else{return 0;}
}
int main(){
    Node* head=nullptr;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    InsertAtTail(head,6);
    InsertAtTail(head,7);
    InsertAtTail(head,9);
    makeCicularLinkedList(head);
    LinkedListTraversal(head);
    if(isCircular(head)){
        cout<<"LinkedList is Circular"<<endl;
    }
    else{
        cout<<"LinkedList is not Circular"<<endl;
    }


}