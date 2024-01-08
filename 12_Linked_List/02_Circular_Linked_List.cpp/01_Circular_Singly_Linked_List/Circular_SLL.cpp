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

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
} 


int main(){
  Node* tail=nullptr;
  insertNode(tail, 5, 3);
    print(tail); 
insertNode(tail, 3, 4);
    print(tail); 
}