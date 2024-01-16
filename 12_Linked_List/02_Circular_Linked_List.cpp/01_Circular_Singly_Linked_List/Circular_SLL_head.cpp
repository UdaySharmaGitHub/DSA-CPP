#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data= val;
        next = nullptr;
    }
};

void InsertAtHead(node* &head , int val){
    node* n = new node(val);
   if(head==nullptr){
    n->next=n;
    head=n;
    return ;
   }
   node* temp =head;
   while(temp->next!=head){
    temp = temp->next;
   }
   temp->next=n;
   n->next=head;
   head=n;

}

void InsertAtTail(node* &head,int val){
    if(head==nullptr){
       InsertAtHead(head,val);
       return;
    }
    node* n = new node(val);
    node* temp =head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
 }

void DeleteAtHead(node* &head){
    node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
        node* nodeToDelete = head;
    temp->next=head->next;
    head=head->next;
        cout<<"Deleted Node:"<<nodeToDelete->data<<endl;
delete nodeToDelete;
}
void DeleteAtPosition(node* &head,int position){
        node* temp= head;
        if(position==1){
           DeleteAtHead(head);
           return ;
        }
        int i = 1;
        while(i!=position-1){
          temp = temp->next;            
          i++;
        }
        node* nodeToDelete = temp->next;
        temp->next=temp->next->next;
        cout<<"Deleted Node:"<<nodeToDelete->data<<endl;
        delete nodeToDelete;

}
void display(node* &head){
    if(head==nullptr){
        cout<<"Nothing To print:"<<endl;
    }
    node* temp= head;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=head);
    cout<<"NULL"<<endl;
    cout<<"Position Of head:"<<head->data<<endl;
}

void page(){
	cout<<"\t\t\t\t______________________________________________"<<endl;
	cout<<"\t\t\t\t Operation in the Circular Singly linked list using Head pointer"<<endl;
	cout<<"\t\t\t\t______________________________________________"<<endl;
   	cout<<"\t\t\t\t 1). Inserting node in the begining"<<endl;
	cout<<"\t\t\t\t  2). Inserting node in the end/Tail"<<endl;
	cout<<"\t\t\t\t  3). Inserting node at the index"<<endl;
	cout<<"\t\t\t\t  4). Inserting node after the Given Node"<<endl;
	cout<<"\t\t\t\t  5). Deleetion of the head Node"<<endl;
	cout<<"\t\t\t\t  6). Deletion of the end/tail/last Node"<<endl;
	cout<<"\t\t\t\t  7). Deletion of the given Node"<<endl;
	cout<<"\t\t\t\t  8). Deletion at the index in SLL"<<endl;
	cout<<"\t\t\t\t  9). Traversal of the Linked list"<<endl;
	cout<<"\t\t\t\t  10). Searching of the Linked list"<<endl;
	cout<<"\t\t\t\t  11). Count no of node or length of the Linked list"<<endl;
	cout<<"\t\t\t\t  12). Reversing the Singly Linked list"<<endl;
	cout<<"\t\t\t\t______________________________________________"<<endl;
}
int main(){
    node* head=NULL;
    // display(head);
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    display(head);
    InsertAtHead(head,5);
    InsertAtHead(head,6);
    display(head);
    DeleteAtPosition(head,1);
    display(head);
    DeleteAtPosition(head,3);
    display(head);
}