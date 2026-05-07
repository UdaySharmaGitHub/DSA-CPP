/*
Delete all occurrences of a given key in a doubly linked list
You are given the head_ref of a doubly Linked List and a Key. Your task is to delete all occurrences of the given key if it is present and return the new DLL.

Example1:

Input: 
2<->2<->10<->8<->4<->2<->5<->2
2
Output: 
10<->8<->4<->5
Explanation: 
All Occurences of 2 have been deleted.

Example2:

Input: 
9<->1<->3<->4<->5<->1<->8<->4
9
Output: 
1<->3<->4<->5<->1<->8<->4
Explanation: 
All Occurences of 9 have been deleted.
Your Task:

Complete the function void deleteAllOccurOfX(struct Node** head_ref, int key), which takes the reference of the head pointer and an integer value key. Delete all occurrences of the key from the given DLL.

Expected Time Complexity: O(N).

Expected Auxiliary Space: O(1).

Constraints:

1<=Number of Nodes<=105

0<=Node Value <=109
*/
/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
}; */

/*
    APPROACH:
    1. We will first check if the head node itself holds the key to be deleted. 
        If it does, then we will keep on deleting the head node until the head node itself 
            does not hold the key to be deleted. This is done because we need to update the head pointer to 
            the new head of the linked list after deletion of the head node.
    2. After that, we will traverse the linked list and keep on deleting the nodes which hold the key to be deleted. 
        We will keep track of the previous and next nodes of the current node to be deleted and update the next pointer of 
        the previous node and the previous pointer of the next node accordingly. 
        This is done to maintain the integrity of the linked list after deletion of the current node.

        Time Complexity: O(N) where N is the number of nodes in the linked list.
        Space Complexity: O(1) as we are not using any extra space.
*/
class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        // code here
          while(*head_ref && (*head_ref)->data==x)
        {
            *head_ref=(*head_ref)->next;
        }
        Node* curr=*head_ref;
        Node* prev=NULL;
        Node* next=NULL;
        while(curr)
        {
            next=curr->next;
            if(curr->data==x)
            {
                prev->next=next;
                if(next)
                    next->prev=prev;
                curr->next=NULL;
                curr->prev=NULL;
                delete(curr);
            }
            else
                prev=curr;
            curr=next;
        }
    }
};