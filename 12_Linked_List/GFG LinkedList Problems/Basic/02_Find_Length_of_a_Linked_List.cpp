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