/*
Remove duplicates from a sorted DLL
Given a doubly linked list of n nodes sorted by values, remove duplicate nodes present in the linked list.

Examples:

Input: n = 6, Linked List: 1<->1<->1<->2<->3<->4
Output: 1<->2<->3<->4
Explanation:
Only the first occurance of node with value 1 is 
retained, rest nodes with value = 1 are deleted.
Input: n = 7, Linked List: 1<->2<->2<->3<->3<->4<->4
Output: 1<->2<->3<->4
Explanation:
Only the first occurance of nodes with values 2,3 and 4 are 
retained, rest repeating nodes are deleted.
Constraint:
1 ≤ n ≤ 105
*/
/*
class Node {
public:
    int data;  // value stored in node
    Node* next;
    Node* prev;

    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
}
*/
/*
    APPROACH:
    1. We can use two pointers, one to keep track of the current node and another to find the next distinct node.
    2. We will iterate through the linked list and for each node, we will check if the next node has the same value. If it does, we will keep moving the next pointer until we find a node with a different value.
    3. Once we find a node with a different value, we will update the next pointer of the current node to point to the next distinct node and update the previous pointer of the next distinct node to point to the current node.
    4. We will continue this process until we reach the end of the linked list.

    TIME COMPLEXITY: O(n) where n is the number of nodes in the linked list.
    SPACE COMPLEXITY: O(1) as we are using only constant extra space.
*/
class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        // code here
        Node* temp=head;
        
        while(temp!=NULL && temp->next!=NULL){
            
            Node* nextNode= temp->next;
            while(nextNode!=NULL && nextNode->data== temp->data){
                
                Node* duplicate= nextNode;
                nextNode=nextNode->next;
                
                delete duplicate;
            }
            
            temp->next=nextNode;
            if(nextNode!=NULL) nextNode->prev=temp;
            temp=temp->next;
        }
        return head;
        
    }
};