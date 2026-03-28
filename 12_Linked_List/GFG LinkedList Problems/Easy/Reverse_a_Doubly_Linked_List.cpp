/*
Reverse a Doubly Linked List
You are given the head of a doubly linked list. You have to reverse the doubly linked list and return its head.
Examples:
Input:
Output: 5 <-> 4 <-> 3
Explanation: After reversing the given doubly linked list the new list will be 5 <-> 4 <-> 3.
Input: 
Output: 196 <-> 59 <-> 122 <-> 75
Explanation: After reversing the given doubly linked list the new list will be 196 <-> 59 <-> 122 <-> 75.
Constraints:
1 ≤ number of nodes ≤ 106
0 ≤ node->data ≤ 104
*/
/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        if(!head || !head->next)return head;
        Node* temp = nullptr , *curr = head;
        while(curr){
            temp = curr->prev;
            curr->prev = curr->next;
            curr->next = temp;
            curr = curr->prev;
        }
        if(temp) curr  = temp->prev;
        return curr;
    }
};