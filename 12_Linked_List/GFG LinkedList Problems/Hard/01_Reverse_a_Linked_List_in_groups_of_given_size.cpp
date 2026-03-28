/*
Reverse a Linked List in groups of given size
Given a linked list of size N. The task is to reverse every k nodes (where k is an input 
to the function) in the linked list. If the number of nodes is not a multiple of k then 
left-out nodes, in the end, should be considered as a group and must be reversed 
(See Example 2 for clarification).
Example 1:
Input:
LinkedList: 1->2->2->4->5->6->7->8
K = 4
Output: 4 2 2 1 8 7 6 5 
Explanation: 
The first 4 elements 1,2,2,4 are reversed first 
and then the next 4 elements 5,6,7,8. Hence, the 
resultant linked list is 4->2->2->1->8->7->6->5.
Example 2:
Input:
LinkedList: 1->2->3->4->5
K = 3
Output: 3 2 1 5 4 
Explanation: 
The first 3 elements are 1,2,3 are reversed 
first and then elements 4,5 are reversed.Hence, 
the resultant linked list is 3->2->1->5->4.
Your Task:
You don't need to read input or print anything. Your task is to complete the function 
reverse() which should reverse the linked list in group of size k and return the head of the modified linked list.
Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)
Constraints:
1 <= N <= 105
1 <= k <= N
*/
/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

//  Using Without Recursion
// Time Complexity: O(N)
// Space Complexity: O(1)
class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // code here
        Node* dummy = new Node(0);
        dummy->next = head;

        // Pointer to keep track of the previous group's tail
        Node* groupPrev = dummy;

        while (true) {
            // Finding the k-th node from the groupPrev
            Node* kth = getKthNode(groupPrev, k);
            if (!kth) break;

            // Store the next group's head
            Node* groupNext = kth->next;

            // Break the chain to reverse current k-group cleanly
            Node* prev = groupNext;
            Node* curr = groupPrev->next;

            // Reversing k nodes
            for (int i = 0; i < k; i++) {
                Node* temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }

            // Connecting previous group to the reversed group
            Node* temp = groupPrev->next;
            groupPrev->next = kth;
            groupPrev = temp;
        }

        // Returning the new head
        return dummy->next;
    }

    // Helper function to find the k-th node from the current node
    Node* getKthNode(Node* curr, int k) {
        while (curr && k > 0) {
            curr = curr->next;
            k--;
        }
        return curr;
    }
};

//  Using With Recursion
// Time Complexity: O(N)
// Space Complexity: O(N)
class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // code here
        if(!head) return nullptr;
        int count = 0 ;
        Node* curr = head , * prev = nullptr , *nxt = nullptr;
        while(curr && count<k){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr= nxt;
            count++;
        }
        if(nxt){
            head->next = reverseKGroup(nxt,k);
        }
        return prev;
    }
};