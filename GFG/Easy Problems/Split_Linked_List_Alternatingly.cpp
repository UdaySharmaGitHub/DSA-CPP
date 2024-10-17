/*
Split Linked List Alternatingly
Given a singly linked list's head. Your task is to complete the function alternatingSplitList() that splits the given linked list into two smaller lists. The sublists should be made from alternating elements from the original list.
Note: 

The sublist should be in the order with respect to the original list.
Your have to return an array containing the both sub-linked lists.
Examples:

Input: LinkedList = 0->1->0->1->0->1
Output: 0->0->0 , 1->1->1
Explanation: After forming two sublists of the given list as required, we have two lists as: 0->0->0 and 1->1->1.

Input: LinkedList = 2->5->8->9->6
Output: 2->8->6 , 5->9
Explanation: After forming two sublists of the given list as required, we have two lists as: 2->8->6 and 5->9.
Input: LinkedList: 7 
Output: 7 , <empty linked list>
Constraints:
1 <= number of nodes <= 100
1 <= node -> data <= 104
*/
/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
  void insertAtTail(Node*&head,Node*&tail,Node* node){
      if(!head){
          head = node;
          tail = node;
          return ;
      }
      tail->next = node;
      tail = node;
      
      
  }
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) {
        // Your code here
        if(!head || !head->next) return {head,nullptr};
        Node* node1 = nullptr , *node2 = nullptr;
        Node* node1Tail = nullptr , *node2Tail = nullptr;
        int i = 0;
        while(head){
            if(i%2==0) insertAtTail(node1,node1Tail,head);
            else insertAtTail(node2,node2Tail,head);
            i++;
            head = head->next;
        }
        node1Tail->next = nullptr;
        node2Tail->next = nullptr;
        
        return {node1,node2};
    }
};