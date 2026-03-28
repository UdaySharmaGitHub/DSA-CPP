//---------------------Searching----------------------//
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