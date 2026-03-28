#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node() {
        cout << "Memory free for node with data " << data << endl;
    }
};

// ---------------- Traversal ----------------
void DLLTraversal(Node* head){
    if(head == NULL){
        cout << "DLL is Empty\n";
        return;
    }

    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " <=> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// ---------------- Length ----------------
int LengthDLL(Node* head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}

// ---------------- Insert at Head ----------------
void InsertAtHead(Node* &head, Node* &tail, int x){
    Node* node = new Node(x);

    if(head == NULL){
        head = tail = node;
        return;
    }

    node->next = head;
    head->prev = node;
    head = node;
}

// ---------------- Insert at Tail ----------------
void InsertAtTail(Node* &head, Node* &tail, int x){
    Node* node = new Node(x);

    if(tail == NULL){
        head = tail = node;
        return;
    }

    tail->next = node;
    node->prev = tail;
    tail = node;
}

// ---------------- Insert at Index (0-based) ----------------
void InsertAtIndex(Node* &head, Node* &tail, int x, int index){

    if(index == 0){
        InsertAtHead(head, tail, x);
        return;
    }

    Node* temp = head;
    int i = 0;

    while(temp != NULL && i < index-1){
        temp = temp->next;
        i++;
    }

    if(temp == NULL){
        cout << "Invalid Index\n";
        return;
    }

    if(temp->next == NULL){
        InsertAtTail(head, tail, x);
        return;
    }

    Node* node = new Node(x);

    node->next = temp->next;
    node->prev = temp;

    temp->next->prev = node;
    temp->next = node;
}

// ---------------- Delete at Head ----------------
void DeleteAtHead(Node* &head, Node* &tail){
    if(head == NULL){
        cout << "DLL is Empty\n";
        return;
    }

    Node* temp = head;

    if(head == tail){
        head = tail = NULL;
    }
    else{
        head = head->next;
        head->prev = NULL;
    }

    delete temp;
}

// ---------------- Delete at Tail ----------------
void DeleteAtTail(Node* &head, Node* &tail){
    if(tail == NULL){
        cout << "DLL is Empty\n";
        return;
    }

    Node* temp = tail;

    if(head == tail){
        head = tail = NULL;
    }
    else{
        tail = tail->prev;
        tail->next = NULL;
    }

    delete temp;
}

// ---------------- Delete at Position (1-based) ----------------
void DeleteAtPosition(Node* &head, Node* &tail, int position){

    if(head == NULL){
        cout << "DLL is Empty\n";
        return;
    }

    if(position == 1){
        DeleteAtHead(head, tail);
        return;
    }

    Node* curr = head;
    int i = 1;

    while(curr != NULL && i < position){
        curr = curr->next;
        i++;
    }

    if(curr == NULL){
        cout << "Invalid Position\n";
        return;
    }

    if(curr == tail){
        DeleteAtTail(head, tail);
        return;
    }

    curr->prev->next = curr->next;
    curr->next->prev = curr->prev;

    delete curr;
}

// ---------------- Main ----------------
int main(){

    Node* head = NULL;
    Node* tail = NULL;

    int choice, x, index;

    while(true){
        cout << "\n1.Insert Head\n2.Insert Tail\n3.Insert Index\n";
        cout << "4.Delete Head\n5.Delete Tail\n6.Delete Position\n";
        cout << "7.Traverse\n8.Length\n9.Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice){

        case 1:
            cout << "Enter value: ";
            cin >> x;
            InsertAtHead(head, tail, x);
            break;

        case 2:
            cout << "Enter value: ";
            cin >> x;
            InsertAtTail(head, tail, x);
            break;

        case 3:
            cout << "Enter value: ";
            cin >> x;
            cout << "Enter index (0-based): ";
            cin >> index;
            InsertAtIndex(head, tail, x, index);
            break;

        case 4:
            DeleteAtHead(head, tail);
            break;

        case 5:
            DeleteAtTail(head, tail);
            break;

        case 6:
            cout << "Enter position (1-based): ";
            cin >> index;
            DeleteAtPosition(head, tail, index);
            break;

        case 7:
            DLLTraversal(head);
            break;

        case 8:
            cout << "Length: " << LengthDLL(head) << endl;
            break;

        case 9:
            return 0;

        default:
            cout << "Invalid Choice\n";
        }
    }
}