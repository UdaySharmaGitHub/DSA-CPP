/*
Insert in Middle of Linked List
Given the head of a Singly Linked List and a value x. The task is to insert the key in the middle of the linked list.

Examples :

Input: LinkedList = 1->2->4 , x = 3
Output: 1->2->3->4
Explanation: 

The new element is inserted after the current middle element in the linked list.
Input: LinkedList = 10->20->40->50 , x = 30
Output: 10->20->30->40->50
Explanation: 

The new element is inserted after the current middle element in the linked list and Hence, the output is 10->20->30->40->50.
Expected Time Complexity: O(n)
Expected Auxilliary Space: O(1)

Constraints:
0 <= number of nodes <= 105
0 <= node->data , x <= 103
*/
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to insert a node in the middle of the linked list.
class Solution {
  public:
  int getLen(Node* head){
      int i =0 ;
      while(head){ i++;head = head ->next;}
      return i;
  }
    Node *insertInMiddle(Node *head, int x) {
        // Code Here
        Node* node = new Node(x);
        if(!head) return node;
        int n = getLen(head);
        int mid = ((n&1)?n:(n-1))/2 , i = 0 ;
        Node* curr = head , *temp = head->next ;
        while(i<mid && temp && curr){
            i++;
            curr = temp ; temp = temp->next;
        }
        curr -> next = node;
        node->next = temp;
        return head ;
    }
};