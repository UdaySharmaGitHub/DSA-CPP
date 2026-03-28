/*
Search In Linked List
You are given a singly linked list of n elements, and also an element x. You need to find if x is present in the linked list or not. Return true if x is present else returns false. (1 is printed by the driver code if the returned value is true, otherwise 0)

Examples :

Input: LinkedList: 1->2->3->4->5, x = 4
Output: 1
Input: LinkedList: 2->4->6->7->5->1->0, x = 10
Output: 0
Constraints:
1 <= n <= 100
1 <= x, value <= 103
*/
// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};
*/
// Time Complexity: O(N)
// Auxiliary Space: O(1)
class Solution {
  public:
    bool searchLinkedList(Node *head, int x) {
        // Your code here
        while(head){
            if(head->data == x) return 1;
            head = head->next;
        }
        return 0;
    }
};
// Time Complexity: O(N)
// Auxiliary Space: O(N), Stack space used by recursive calls
class Solution {
  public:
    bool searchLinkedList(Node *head, int x) {
        // Your code here
        if(head==nullptr) return 0;
        if(head ->data ==x) return 1;
        return searchLinkedList(head->next,x);
    }
};