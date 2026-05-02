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
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/
/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/
/*
    APPROACH: We can find the middle of the linked list and then reverse the second half of the linked list and then 
              compare the first half and the second half of the linked list. Finally, we can reverse the second 
              half of the linked list again to restore the original linked list.
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
class Solution {
  public:
  Node* findMiddle(Node* head){
      Node* slow = head , *fast = head->next;
      while(fast && fast->next){
          slow = slow->next;
          fast =fast->next->next;
      }
      return slow;
  }
  Node* reverse(Node* head){
      
      Node* curr = head ,*prev = nullptr , *nxt = nullptr;
      while(curr){
          nxt = curr->next;
          curr->next = prev;
          prev = curr;
          curr = nxt;
      }
      return prev;
  }
    bool isPalindrome(Node *head) {
        //  code here
        
    //   Step-1 Find the middle of the LinkedList
       Node* middle = findMiddle(head);
       Node* middleNxt = middle->next;
       
       //   Step-2 Reverse List After Middle
       middle->next = reverse(middleNxt);
       
       //   Step-3 Compare Both the Halves
       Node* head1 = head , * head2 = middle->next;
      while(head2){
          if(head1->data != head2->data) return 0;
          head1 = head1->next;
          head2 = head2->next;
      }
      
    //   Step-4 Repeat Step-2 => Returing List to Original
    Node* temp = middle->next;
    middle->next = reverse(temp);
      return 1;
    }
};
/*
    Approach: We can use a stack to store the elements of the linked list and then compare the elements of the stack with the elements of the linked list.
    Time Complexity: O(n)
    Space Complexity: O(n)
*/
class Solution {
  public:
    bool isPalindrome(Node *head) {
        //  code here
        stack<int> st;
        Node* temp = head;
        while(temp){
            st.push(temp->data);
            temp= temp->next;
        }
        while(head){
            if(st.top() != head->data)return 0;
            st.pop();
            head = head->next;
        }
        return st.empty();
    }
};
/*
    Approach: We can use a vector to store the elements of the linked list and then compare the elements of the vector with the elements of the linked list.
    Time Complexity: O(n)
    Space Complexity: O(n)
*/
class Solution {
  public:
    bool isPalindrome(Node *head) {
        //  code here
        vector<int> arr;
        while(head){ arr.push_back(head->data); head = head->next;}
        int i=0 , j  = arr.size()-1;
        while(i<j){
            if(arr[i] != arr[j]) return 0;
            i++;j--;
        }
        return 1;
    }
};