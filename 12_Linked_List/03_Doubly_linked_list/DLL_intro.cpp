#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
          this->data=data;
          this->prev=NULL;
          this->next=NULL;
    }
        ~Node() {
        int val = this -> data;
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
    }
};
//------------------Traversing the Doubly Linked List-------------------------//
void DLLTraversal(Node* head,Node* tail){
    Node* temp = head;
    if(head==NULL){
        cout<<"Nothing To Display Doubly Linked List is Empty"<<endl;
        return ;
    }
    while(temp!=NULL){
        cout<<temp->data<<" <=> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    cout<<"Head :"<<head->data<<endl;
cout<<"tail :"<<tail->data<<endl;
}

//------------Find Length of a Doubly Linked List / no of Node---------------------//
//----------------Iterative Approach-------------------------------//
// Time complexity: O(N), Where N is the size of the Doubly Linked List
// Auxiliary Space: O(1), As constant extra space is used.
int LengthDLL(Node* &head){
    int count = 0 ;
    if(head==NULL){
        return count ;
    }
    Node* temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count ;
}



//------------Insertion in Doubly Linked List---------------------//
//-------------Insertion At Head--------------------------//
void InsertAtHead(Node* &head,Node* &tail,int x){
    Node* node = new Node(x);
    if(head==NULL){
        head=node;
        tail=node;
        return ;
    }
    else{
        node->next=head;
        head->prev=node;
        node->prev=NULL;
        head=node;
    }
}
//-------------Insertion At tail--------------------------//
void InsertAtTail(Node* &head,Node* &tail,int x){
    Node* node= new Node(x);
    if( tail==NULL){
         head=node;
        tail=node;
           return;

    }
    else{
        tail->next=node;
        node->prev=tail;
        tail=node;
    }
}
//-------------Insertion At Index--------------------------//
void InsertAtIndex(Node* &head,Node* &tail,int x,int index){
    if(index==0){
        InsertAtHead(head,tail,x);
           return;
    }
    Node* temp=head;
        int i = 1;
        while(i<index){
            temp=temp->next;
            i++;
        }
        if(temp->next==NULL){
            InsertAtTail(head,tail,x);
           return;
        }
         Node*node= new Node(x);
         // place $ pointer
        node->next=temp->next;
        temp->next->prev=node;
        temp->next=node;
        node->prev=temp;
}

//-----------------------------Deletion in Doubly Linked List------------------------------//
//----------------Delete at Head----------------//
void DeleteAtHead(Node* &head){
 if(head==NULL){
        cout<<"Nothing To Delete Doubly Linked List is Empty"<<endl;
        return ;
 }
 else{
    Node* temp = head;
    head=head->next;
    temp->next=nullptr;
    delete temp;
 }
}
//----------------Delete at Tail----------------//
void DeleteAtTail(Node* &head,Node* &tail){
 if(head==NULL){
        cout<<"Nothing To Delete Doubly Linked List is Empty"<<endl;
        return ;
 }
 else{
    Node* temp = head;
    Node* prevtemp=nullptr;
    while(temp->next!=nullptr){
        prevtemp=temp;
        temp=temp->next;
    }
    prevtemp->next=nullptr;
    tail=prevtemp;
    delete temp;
 }
}
//----------------Delete at Position----------------//
void DeleteAtPosition(Node* &head,Node* &tail,int position){
 if(position==1){
    Node* temp = head;
    head=head->next;
    temp->next=nullptr;
    delete temp;
 }
 else{
    Node * curr = head , *prevtemp=nullptr; 
    int i=1;
    while(i<position){
        prevtemp=curr;
        curr=curr->next;
        i++;
    }
    prevtemp->next=curr->next;
    curr->next=nullptr;
    if(prevtemp->next==nullptr){
        tail=prevtemp;
    }
    delete curr;
 }
}
//------- Main Function -----------------//
int main(){
Node* head = NULL;
Node* tail =NULL;
DLLTraversal(head,tail);
cout<<"The length of the Doubly Linked List:"<<LengthDLL(head)<<endl;
InsertAtHead(head,tail,10);
InsertAtHead(head,tail,12);
InsertAtHead(head,tail,13);
InsertAtHead(head,tail,14);
InsertAtHead(head,tail,15);
InsertAtHead(head,tail,16);
DLLTraversal(head,tail);

InsertAtTail(head,tail,9);
InsertAtTail(head,tail,1);
DLLTraversal(head,tail);

InsertAtIndex(head,tail,5,3);
DLLTraversal(head,tail);
InsertAtTail(head,tail,2);
DLLTraversal(head,tail);
InsertAtIndex(head,tail,3,10);
DLLTraversal(head,tail);

DeleteAtPosition(head,tail,1);
DLLTraversal(head,tail);
DeleteAtPosition(head,tail,2);
DLLTraversal(head,tail);
DeleteAtPosition(head,tail,9);
DLLTraversal(head,tail);

DeleteAtHead(head);
DLLTraversal(head,tail);

DeleteAtTail(head,tail);
DLLTraversal(head,tail);

cout<<"The length of the Doubly Linked List:"<<LengthDLL(head)<<endl;


return 0;
}