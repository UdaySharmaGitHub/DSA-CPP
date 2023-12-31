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



//----------------------------Insertion in Singly Linked List-----------------------------//
//---------------------------- Insertion at the begining-----------------------------//
// Time Complexity: O(1)
// Auxiliary Space: O(1)
void InsertAtHead(Node* &head,int val){
    Node* n =new Node(val);
    Node * tail;
    if(head==NULL){
     head = n;
    }
    else{
        n->next =head;
        head=n;
    }
}
//---------------------------- Insertion in middle-----------------------------//
// Time Complexity: O(n)
// Auxiliary Space: O(1)
void InsertAtIndex(Node* &head, int n , int index){
    if(index==0){
        InsertAtHead(head,n);
        return;
    }
    Node * node = new Node(n);
    Node * temp = head;
    int i = 1;   // insert at the first index
    while(i<index){
temp = temp->next;
        i++;
    }
 node->next=temp->next;    
    temp->next=node;

}
//---------------------------- Insertion After the given Node-----------------------------//
// Time Complexity: O(1)  // because previous Node is ALready given
// Auxiliary Space: O(1)
void InsertAfterGivenNode(Node* head,int n,int givenval){
    Node * newNode = new Node(n);
    if(head==NULL){
        head==newNode;
        return ;
    }
    Node * temp =head;
    while(temp->data!=givenval){
     temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
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
// Insertion at the tail using the two pointer
void InsertAtTail2(Node* &tail,int n){
    Node* node  = new Node(n);
    tail->next=node;
    tail=node;
}




//---------------------------------Deletion in Singly Linked List-----------------------------//
//--------------Deletion in head--------------//
void DeleteAtHead(Node* &head){
    if(head==NULL){
            cout<<"Nothing to delete Linked List is Empty:"<<endl;
return ;
    }
    Node* temp = head;
    head=head->next;
    temp->next=NULL;
    delete temp;
}
//--------------Deletion At index--------------//
void DeleteAtIndex(Node* &head,int position){
    if(position==0){
   DeleteAtHead(head);
    }
    else{
        Node * curr = head;
        Node * prev=NULL;
        int cnt = 0;
        while(cnt<position){
            prev=curr;
  curr=curr->next;
  cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
//--------------Deletion At Value--------------//
void DeleteAtValue(Node* &head,int Value){
    if(head==NULL){
            cout<<"Nothing to delete Linked List is Empty:"<<endl;
        return ;
    }
        Node * curr = head;
        int cnt = 0;
        while(curr->next->data!=Value){
  curr=curr->next;
        }
     Node *todelete = curr->next;
     curr->next=todelete->next;
     todelete->next=NULL;
        delete todelete;
}
//--------------Deletion At Tail/Last/end-------------//
void DeleteAtTail(Node* &head){
    Node* temp = head;
     if(head==NULL){
            cout<<"Nothing to delete Linked List is Empty:"<<endl;
        return ;
    }
    if(head->next==NULL){
        DeleteAtHead(head);
        return ;
    }
    else{
        Node * p=head;
     Node *q=head->next;
   while(q->next!=NULL){
   	p=p->next;
   	q=q->next;
   }
   p->next=NULL;
delete q;

    }
}


//---------------------Searching in Singly Linked List----------------------//
//----------- Iterative Approach ----------------//
// Time Complexity: O(N), Where N is the number of nodes in the LinkedList
// Auxiliary Space: O(1)
bool search(Node* head,int val){
    Node * temp = head;
    while(temp!=NULL){
        if(temp->data==val){
            return 1;
        }
temp=temp->next;
    }
    return 0;
}
//-------------Recursive Approach-------//
// Time Complexity: O(N)
// Auxiliary Space: O(N), Stack space used by recursive calls
bool searchRecursive(Node* head,int val){
    if(head==NULL){
        return 0;
    }
    if(head->data==val){
        return 1;
    }
    return searchRecursive(head->next,val);
}
//------------------Reverse SLL------------------//
//----------- Iterative Approach ----------------//
// Time Complexity: O(N), Traversing over the linked list of size N. 
// Auxiliary Space: O(1)
Node* ReverseSSL(Node* &head){
  Node* prev =NULL ;  // null
  Node *curr= head ;  // 1
  Node *nxt;      //  1 2 3 4 5
  // Just Reversing the pointer link
  while(curr!=NULL){
    nxt = curr->next; // 2  // 3  // 4 //5  // null //null
   curr->next=prev;   // 1->prev  // 2->prev(1) //3->prev(2) //4->prev(3) //5->prev(4) // null
   prev=curr;        // 1 = prev //2 = prev //3 = prev //4 = prev //5 = prev
   curr=nxt;        // 2 = curr //3 = curr //4 = curr //5 = curr //null
    LinkedListTraversal(prev);
  }
return prev;  //  this become new Pointer poitning the last node and become 
}
//----------- Recursive Approach ----------------//
//        Time Complexity: O(N), Visiting over every node one time 
//        Auxiliary Space: O(N), Function call stack space
Node * ReverseRecursiveAppSLL(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node * newNode = ReverseRecursiveAppSLL(head->next);
    head->next->next=head;
    head->next=NULL;
    return newNode;
}
//----------- Using Stack ----------------//
// void ReverseUsingStack(Node* &head){

// }




//------------Find Length of a Singly Linked List / no of Node---------------------//
//----------------Iterative Approach-------------------------------//
// Time complexity: O(N), Where N is the size of the linked list
// Auxiliary Space: O(1), As constant extra space is used.
int LengthSLL(Node* &head){
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
//----------------Recursive Approach-------------------------------//
// Time Complexity: O(N), As we are traversing the linked list only once.
// Auxiliary Space: O(N), Extra space is used in the recursion call stack.
int LengthSLLRecursive(Node * &head){
    if(head==NULL){
        return 0 ;
    }
    else{
        return 1+LengthSLLRecursive(head->next);
    }
}
//----------------Optimized Recursive Approach-------------------------------//
// Time Complexity: O(N), As we are traversing the list only once.
// Auxiliary Space: O(N), In worst case the depth of recursion call stack will be N.
int LengthSLLOptimizedRecursive(Node * &head,int count = 0){
    if(head==NULL){
        return count ;
    }
    else{
        return LengthSLLOptimizedRecursive(head->next,count+1);
    }
}
void page(){
	cout<<"\t\t\t\t______________________________________________"<<endl;
	cout<<"\t\t\t\t Operation in the Singly linked list"<<endl;
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
    Node * head = NULL;
    int x,choice,index;
    page();
    int t ;
    cout<<"No of Test Case:"<<endl;
    cin>>t;
    while(t--){
        cout<<"Choose the Option :";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter the Element to Insert at the Begining of SLL :";
            cin>>x;
            InsertAtHead(head,x);
            break;
        case 2:
            cout<<"Enter the Element to Insert at the End/Tail of SLL :";
            cin>>x;
            InsertAtTail(head,x);  
            break;
        case 3:
            cout<<"Enter the Element to Insert at the index of SLL :";
            cin>>x;
            cout<<"Enter the index to Insert node in SLL :";
            cin>>index;
            InsertAtIndex(head,x,index);
            break;
        case 4:
            cout<<"Enter the Element to Insert node after the Given Node in SLL :";
            cin>>x;
            cout<<"Enter the Given Node in SLL :";
            cin>>index;
            InsertAfterGivenNode(head,x,index);
            break;
        case 5:
            DeleteAtHead(head);
            break;
        case 6:
            DeleteAtTail(head);
            break;
        case 7:
            cout<<"Enter the Element to delete from the SLL :";
            cin>>x;
            DeleteAtValue(head,x);
            break;
        case 8:
            cout<<"Enter the index to delete from the SLL :";
            cin>>x;
            DeleteAtIndex(head,x);
            break;
        case 9:
            LinkedListTraversal(head);
            break;
        case 10:
            cout<<"Enter the element you Want to Search in the SLL :";
            cin>>x;
            cout<<"From Iterative Approach :"<<search(head,x)<<endl;
            cout<<"From Recursive Approach :"<<searchRecursive(head,x)<<endl;
            break;
        case 11:
            cout<<"Length of the SLL of No of Nodes in SLL : "<<endl;
            cout<<"From Iterative Approach :"<<LengthSLL(head)<<endl;
            cout<<"From Recursive Approach :"<<LengthSLLRecursive(head)<<endl;
            cout<<"From Optimized Recursive Approach :"<<LengthSLLOptimizedRecursive(head)<<endl;
            break;
        case 12:
           head = ReverseSSL(head);
           cout<<"Reversing the Linked list using the Iterative Approach:"<<endl;
           LinkedListTraversal(head);
           break;
        default:
            cout<<"Invalid choice Enter again:"<<endl;
            break;
        }
    }
    // Node * node = new Node(7);
    // cout<< node->data <<endl;  // print the data part
    // cout<< node->next <<endl;  // print the next part address
/*
cout<<"Insert at the Tail using the head Pointer:"<<endl;
    LinkedListTraversal(head);
    InsertAtHead(head,10);
    LinkedListTraversal(head);
    InsertAtHead(head,12);
    LinkedListTraversal(head);
    InsertAtHead(head,13);
    LinkedListTraversal(head);
    InsertAtHead(head,14);
    LinkedListTraversal(head);
    InsertAtHead(head,15);
    LinkedListTraversal(head);
    InsertAtHead(head,16);
    InsertAtHead(head,17);
    InsertAtHead(head,18);
    LinkedListTraversal(head);
cout<<"Insert at the Tail using the head Pointer:"<<endl;
    InsertAtTail(head,9);
    LinkedListTraversal(head);
    InsertAtTail(head,8);
    InsertAtTail(head,7);
    InsertAtTail(head,6);
    LinkedListTraversal(head);

cout<<"Insert at the Index using the head Pointer:"<<endl;
        InsertAtIndex(head,5,3);
        LinkedListTraversal(head);
 InsertAtIndex(head,19,0);
        LinkedListTraversal(head);
        InsertAfterGivenNode(head,55,15);
        LinkedListTraversal(head);


// cout<<"Insert at the Tail using the tail Pointer:"<<endl;
        // Node * tail = head;
        //  InsertAtTail2(tail,25);
        // LinkedListTraversal(head);

cout<<"Delete at the index using the head Pointer:"<<endl;
    DeleteAtIndex(head,0);
        LinkedListTraversal(head);
          DeleteAtIndex(head,1);
        LinkedListTraversal(head);
  DeleteAtIndex(head,2);
        LinkedListTraversal(head);
  DeleteAtIndex(head,3);
        LinkedListTraversal(head);
cout<<"Delete at the value using the head Pointer:"<<endl;
DeleteAtValue(head,10);
        LinkedListTraversal(head);
        DeleteAtValue(head,12);
        LinkedListTraversal(head);
DeleteAtHead(head);
        LinkedListTraversal(head);

        cout<<"Searching through Iterative Approach"<<endl;
 cout<<search(head,4)<<endl;
 cout<<search(head,7)<<endl;
        cout<<"Searching through Recursive Approach"<<endl;
        cout<<searchRecursive(head,4)<<endl;
 cout<<searchRecursive(head,7)<<endl;
 cout<<searchRecursive(head,8)<<endl;

DeleteAtTail(head);
        LinkedListTraversal(head);

         cout<<"Reversing through Iterative Approach"<<endl;
        Node* newNoderevers = ReverseSSL(head);
        LinkedListTraversal(newNoderevers);
        cout<<"Reversing through Recursive Approach"<<endl;
        Node* newNodeReverseRecu = ReverseRecursiveAppSLL(head);
          LinkedListTraversal(newNodeReverseRecu);
       
    */
}