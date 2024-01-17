#include<bits/stdc++.h>
using namespace std;
class Node{
 public:
    int data;
    Node* next;


    Node(int data) {
        this->data=data;
        this->next=next;
    }
    ~Node(){
        int val =this->data;
        if(this->next!=nullptr){
            delete next;
            this->next=nullptr;
        }
          cout << " memory is free for node with data " << val << endl;
    }
};

void insertNode(Node* &tail, int element, int d) {
    //empty list
    if(tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //non-empty list
        //assuming that the element is present in the list
        Node* curr = tail;
        while(curr->data != element) {
            curr = curr -> next;
        }
        
        //element found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }

}    

void print(Node* &tail) {

    Node* temp = tail;

    //empty list
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }
    
    cout<<"tail=>"<<tail->data<<endl;
    do {
        cout << tail -> data <<"->";
        tail = tail -> next;
    } while(tail != temp);

    cout <<"NULL"<< endl;
} 

void deleteNode(Node* &tail, int value) {
    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty
        //assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;
        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }
        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}

bool isCircularList(Node* head) {
    //empty list
    if(head == NULL) {
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head ) {
        temp = temp -> next;
    }
    if(temp == head ) {
        return true;
    }
    return false;

}
// Detecting the whether the linked list is Circulary linked or note
bool detectLoop(Node* head) {
    if(head == NULL)
        return false;

    map<Node*, bool> visited;
    Node* temp = head;
    while(temp !=NULL) {
        //cycle is present
        if(visited[temp] == true) {
            return true;
        }
        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}

int main(){
  Node* tail=nullptr;
    print(tail); 
    if(isCircularList(tail)){
    cout<<"LinkedList is Circular in nature:"<<endl;
}
    deleteNode(tail,2);
  insertNode(tail, 5, 3);
    print(tail); 
insertNode(tail, 3, 4);
    print(tail); 
    insertNode(tail, 3, 5);
    print(tail); 
insertNode(tail, 5, 6);
    print(tail); 
deleteNode(tail,3);
print(tail);
if(isCircularList(tail)){
    cout<<"LinkedList is Circular in nature:"<<endl;
}
deleteNode(tail,4);
deleteNode(tail,5);
deleteNode(tail,6);
print(tail);
if(isCircularList(tail)){
    cout<<"LinkedList is Circular in nature:"<<endl;
}


}