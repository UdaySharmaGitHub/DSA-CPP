/*
Palindrome Linked List
Given a singly linked list of integers. The task is to check if the given linked list is palindrome or not.

Examples:

Input: LinkedList: 1->2->1->1->2->1
Output: true
Explanation: The given linked list is 1->2->1->1->2->1 , which is a palindrome and Hence, the output is true.

Input: LinkedList: 1->2->3->4
Output: false
Explanation: The given linked list is 1->2->3->4, which is not a palindrome and Hence, the output is false.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1) 

Constraints:
1 <= number of nodes <= 105
1 ≤ node->data ≤ 103
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

class Solution {
  public:
    // Function to check whether the list is palindrome.
    Node* findMiddle(Node* head){
          Node* slow = head;
        Node* fast = head -> next;
        
        while(fast != NULL && fast-> next != NULL) {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        
        return slow;
    }
    Node* reverse(Node* head){
        Node* prev = nullptr , *curr = head ,*nxt = nullptr;
        while(curr){
            nxt =curr->next;
            curr->next = prev;
            prev = curr;
            curr =nxt;
        }
        return prev;
    }
    bool isPalindrome(Node *head) {
        // Your code here
        if(!head || !head->next) return 1;
        Node* middle = findMiddle(head);
        Node* temp = middle->next;
        middle->next = reverse(temp);
        Node*head2 = middle->next;
        while(head2){
            if(head->data != head2->data) return 0;
            head = head ->next ; head2 = head2->next;
        }
        return 1;
        
    }
};