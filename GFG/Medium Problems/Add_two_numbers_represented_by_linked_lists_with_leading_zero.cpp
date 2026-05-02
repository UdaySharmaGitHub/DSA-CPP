/*
Given two decimal numbers, num1 and num2, represented by linked lists of size n and m respectively. The task is to return a linked list that represents the sum of these two numbers.

For example, the number 190 will be represented by the linked list, 1->9->0->null, similarly 25 by 2->5->null. Sum of these two numbers is 190 + 25 = 215, which will be represented by 2->1->5->null. You are required to return the head of the linked list 2->1->5->null.

Note: There can be leading zeros in the input lists, but there should not be any leading zeros in the output list.

Example 1:

Input:
n = 2
num1 = 45 (4->5->null)
m = 3
num2 = 345 (3->4->5->null)
Output: 
3->9->0->null  
Explanation: 
For the given two linked list (4 5) and (3 4 5), after adding the two linked list resultant linked list will be (3 9 0).
Example 2:

Input:
n = 4
num1 = 0063 (0->0->6->3->null)
m = 2
num2 = 07 (0->7->null)
Output: 
7->0->null
Explanation: 
For the given two linked list (0 0 6 3) and (0 7), after adding the two linked list resultant linked list will be (7 0).
Your Task:
The task is to complete the function addTwoLists() which has node reference of both the linked lists and returns the head of the sum list.   

Expected Time Complexity: O(n+m)
Expected Auxiliary Space: O(max(n,m)) for the resultant list.

Constraints:
1 <= n, m <= 104
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
        while(head1->data==0 && head1->next) head1=head1->next;
        while(head2->data==0 && head2->next) head2=head2->next;
        
        head1 = reverse(head1);
        head2 = reverse(head2);
        
        Node* newHead = nullptr;
        Node* newTail = newHead;
        
        int carry = 0;
        
        while(head1 || head2 || carry){
            int a = (head1!=nullptr)?head1->data:0 ,  b = (head2!=nullptr)?head2->data:0;
            int sum =a+b +carry;
            carry =sum/10;
            int digit = sum%10;
            
            insertAtEnd(newHead,newTail,digit);
            
            if(head1)head1 = head1->next;
            if(head2)head2 = head2->next;
        }
        newHead= reverse(newHead);
        return newHead;
    }
};