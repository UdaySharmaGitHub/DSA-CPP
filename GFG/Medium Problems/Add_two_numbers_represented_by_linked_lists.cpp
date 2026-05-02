/*
Add two numbers represented by linked lists
Given two decimal numbers represented by two linked lists of size N and M respectively. The task is to return a linked list that represents the sum of these two numbers.

For example, the number 190 will be represented by the linked list, 1->9->0->null, similarly 25 by 2->5->null. Sum of these two numbers is 190 + 25 = 215, which will be represented by 2->1->5->null. You are required to return the head of the linked list 2->1->5->null.

Example 1:

Input:
N = 2
valueN[] = {4,5}
M = 3
valueM[] = {3,4,5}
Output: 3 9 0  
Explanation: For the given two linked
list (4 5) and (3 4 5), after adding
the two linked list resultant linked
list will be (3 9 0).
Example 2:

Input:
N = 2
valueN[] = {6,3}
M = 1
valueM[] = {7}
Output: 7 0
Explanation: For the given two linked
list (6 3) and (7), after adding the
two linked list resultant linked list
will be (7 0).
Your Task:
The task is to complete the function addTwoLists() which has node reference of both the linked lists and returns the head of the sum list.   

Expected Time Complexity: O(N+M)
Expected Auxiliary Space: O(Max(N,M)) for the resultant list.

Constraints:
1 <= N, M <= 5000
*/
/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
/*
    APPROACH:-
    1. Reverse both the linked lists.
    2. Add the two linked lists and store the sum in a new linked list.
    3. Reverse the resultant linked list and return the head of the reversed linked list.   

    Time Complexity: O(N+M) + O(N+M) + O(N+M) = O(N+M)
    Space Complexity: O(Max(N,M)) for the resultant list.
*/
class Solution {
  public:
  Node* reverse(Node* head){
      Node* curr = head , *nxt = nullptr ,*prev = nullptr;
      while(curr){
          nxt = curr->next;
          curr ->next = prev;
          prev = curr;
          curr =nxt;
      }
      return prev;
  }
  void insertAtEnd(Node*&newHead,Node*&newTail,int digit){
      Node* node = new Node(digit);
            if(!newHead && !newTail){
                newHead = node; newTail = node;
                return;
            }
                newTail->next =node;
                newTail = node;
  }
    Node* addTwoLists(Node* head1, Node* head2) {
        // code here
        // Remove leading zeros from both the linked lists
        while(head1->data==0 && head1->next) head1=head1->next;
        while(head2->data==0 && head2->next) head2=head2->next;
        
        // Reverse both the linked lists
        head1 = reverse(head1);
        head2 = reverse(head2);
        
        // Add the two linked lists and store the sum in a new linked list
        Node* newHead = nullptr;
        Node* newTail = newHead;
        
        // Initialize carry to 0
        int carry = 0;
        
        // Traverse both the linked lists until both are null and carry is 0
        while(head1 || head2 || carry){
            int a = (head1!=nullptr)?head1->data:0 ,  b = (head2!=nullptr)?head2->data:0;
            int sum =a+b +carry;
            carry =sum/10;
            int digit = sum%10;
            
            // Insert the digit at the end of the new linked list
            insertAtEnd(newHead,newTail,digit);
            
            if(head1)head1 = head1->next;
            if(head2)head2 = head2->next;
        }
        // Reverse the resultant linked list and return the head of the reversed linked list
        newHead= reverse(newHead);
        return newHead;
    }
};