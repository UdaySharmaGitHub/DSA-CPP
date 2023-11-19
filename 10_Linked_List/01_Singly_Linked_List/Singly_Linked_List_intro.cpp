#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
// Traversal of the linked list
void LinkedListTraversal(Node* head){
  Node* temp  = head;
  while(temp!=NULL){
    cout<<temp->data<<"->";
    temp = temp->next;
  }
  cout<<"NULL"<<endl;
}
//-----------------------------Insertion in the Linked List --------------------------//
//   Insertion at the end
void InsertAtTail(Node* &head,int val){
   Node* n  = new Node(val);
if(head==NULL){
    head = n;
}
   else{
    Node* temp = head;
   while(temp->next!=NULL){
    temp=temp->next;
   }
   temp->next = n;
   n->next=NULL;
   }
}
//   Insertion at the begining
void InsertAtHead(Node* &head,int val){
    Node* n =new Node(val);
    if(head==NULL){
     head = n;
    }
    else{
        n->next =head;
        head=n;
    }
}
//--------------------------Deletion in the Linked List -------------------------//
void deletion(Node* &head , int val){
    Node* temp = head;
    while(temp->next->data!=val){
        temp =temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next =deleteNode ->next ;
    free(deleteNode);
}
//--------------------------Searching in the Linked List -------------------------//
bool search(Node* head,int key){
    Node* temp = head ; 
while(temp!=NULL){
    if(temp->data==key){
        return true;
    }
    temp =temp->next;
}
    return false;
}
int main(){
    Node* head=NULL ;
InsertAtTail(head,1);
InsertAtTail(head,2);
InsertAtTail(head,3);
LinkedListTraversal(head);
InsertAtTail(head,4);
LinkedListTraversal(head);
InsertAtHead(head,12);
LinkedListTraversal(head);
cout<<search(head,4)<<endl;
cout<<search(head,14)<<endl;
deletion(head,3);
LinkedListTraversal(head);
deletion(head,4);
LinkedListTraversal(head);
    return 0;
}
