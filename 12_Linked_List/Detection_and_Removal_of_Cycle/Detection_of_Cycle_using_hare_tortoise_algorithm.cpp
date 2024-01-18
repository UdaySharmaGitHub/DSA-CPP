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
  Node* temp  = head;
  if(head==NULL){
    cout<<"Nothing to display Linked List is Empty:"<<endl;
    return ;
  }
  while(temp!=NULL){
    cout<<temp->data<<"->";
    temp = temp->next;
  }
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
void makeCycle(Node* &head,int k){
    Node* temp = head;
    Node* startNode ; 
    int i=1;
    while(temp->next!=nullptr){ // stop at last node
        if(i==k){
            startNode=temp; // go to position and make the startNode
        }
        temp = temp->next; // traverse the temp pointer
        i++;
    }
    temp->next=startNode; // connect the last node to the startNode to Create Cycle
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
    LinkedListTraversal(head);


}