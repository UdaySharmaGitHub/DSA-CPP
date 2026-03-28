//------------------Reverse SLL------------------//
//        Time Complexity O(n)
//----------- Iterative Approach ----------------//
Node* Reverse(Node* &head){
  Node* prev =NULL ;  // null
  Node *curr= head ;  // 1
  Node *nxt;      //  1 2 3 4 5
  // Just Reversing the pointer link
  while(curr!=NULL){
    nxt = curr->next; // 2  // 3  // 4 //5  // null //null
   curr->next=prev;   // 1->prev  // 2->prev(1) //3->prev(2) //4->prev(3) //5->prev(4) // null
   prev=curr;        // 1 = prev //2 = prev //3 = prev //4 = prev //5 = prev
   curr=nxt;        // 2 = curr //3 = curr //4 = curr //5 = curr //null
  }
return prev;  //  this become new Pointer poitning the last node and become 
}
//----------- Recursive Approach ----------------//
Node * RecursiveApp(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node * newNode = RecursiveApp(head->next);
    head->next->next=head;
    head->next=NULL;
    return newNode;
}
//----------- Recursive Approach2 ----------------//
void reverse(Node* &head,Node* curr,Node* prev){
  if(curr==nullptr){head=prev ; return ;}
  Node* next = curr->next;
  reverse(head,next,curr);
  curr->next=prev;

}
Node * RecursiveApp2(Node* &head){
  // base case
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* curr = head;
    Node* prev = nullptr;
    reverse(head,curr,prev);
    return head;
}