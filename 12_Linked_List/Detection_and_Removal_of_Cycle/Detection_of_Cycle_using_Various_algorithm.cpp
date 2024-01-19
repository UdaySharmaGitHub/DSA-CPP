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
//-------------------------Detection of Cycle--------------------------------------------//
//	Detect loop in a linked list using Hashing:
// Time complexity: O(N), Only one traversal of the loop is needed.
// Auxiliary Space: O(N), N is the space required to store the value in the hashmap.
bool detectCycleHashing(Node* head){
    unordered_set<Node*> s;
    while(head!=nullptr){
         // If this node is already present
        // in hashmap it means there is a cycle
        // (Because you will be encountering the
        // node for the second time).
        if (s.find(head) != s.end())
            return true;
        // If we are seeing the node for
        // the first time, insert it in hash
        s.insert(head);
 
        head = head->next;
    }
    return false;
}
//Detect loop in a linked list by Modification In Node Structure:
// Time complexity: O(N), Only one traversal of the loop is needed.
// Auxiliary Space: O(1)
bool detectCycleByModifyingTheLinkedList(Node* head){
    while(head!=nullptr){
        if(head->data==INT_MIN){
            return 1;
        }
        head->data =INT_MIN;
        head=head->next;
    }
    return 0;
}
// Detect loop in a linked list using Floyd’s Cycle-Finding Algorithm:
// Time complexity: O(N), Only one traversal of the loop is needed.
// Auxiliary Space: O(1). 
bool detectCycle(Node* &head){
    Node* slow = head;
    Node* fast= head;
    while(fast!=nullptr &&fast->next!=nullptr){
        slow= slow->next;
        fast = fast->next->next;
        if(fast == slow){
            return 1;
        }
    }
    return 0;
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
    makeCycle(head,4);
    // LinkedListTraversal(head);
// a)	Detect loop in a linked list using Hashing:
cout<<"a) Detect loop in a linked list using Hashing:"<<endl;
    if(detectCycleHashing(head)){
         cout<<"LinkedList is Circular"<<endl;
    }
    else{
        cout<<"LinkedList is not Circular"<<endl;
    }
cout<<"b) Detect loop in a linked list using Hare tortise algorithm"<<endl;
    if(detectCycle(head)){
         cout<<"LinkedList is Circular"<<endl;
    }
    else{
        cout<<"LinkedList is not Circular"<<endl;
    }
cout<<"c) Detect loop in a linked list by Modification In Node Structure:"<<endl;
    if(detectCycleByModifyingTheLinkedList(head)){
         cout<<"LinkedList is Circular"<<endl;
    }
    else{
        cout<<"LinkedList is not Circular"<<endl;
    }

}