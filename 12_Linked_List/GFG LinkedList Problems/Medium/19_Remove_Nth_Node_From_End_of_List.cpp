/*
19. Remove Nth Node From End of List
Given the head of a linked list, remove the nth node from the end of the list and return its head.
Example 1:
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Example 2:
Input: head = [1], n = 1
Output: []
Example 3:
Input: head = [1,2], n = 1
Output: [1]
 
Constraints:
The number of nodes in the list is sz.
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz
 
Follow up: Could you do this in one pass?
*/
/*
    APPROACH: OPTIMIZED -> Using Slow-Fast Pointers / Floyd's Tortoise and Hare Algorithm
    Intuition:
        The idea is to use two pointers, slow and fast, to traverse the linked list. 
        The fast pointer is moved n+1 steps ahead of the slow pointer. 
        This way, when the fast pointer reaches the end of the list, 
        the slow pointer will be at the node just before the target node that needs to be removed. 
        We can then adjust the next pointer of the slow node to skip the target node, effectively removing it from the list.
    step:
    1. Create a dummy node and point it to the head of the list.
    2. Initialize two pointers, slow and fast, both pointing to the dummy node.
    3. Move the fast pointer n+1 steps ahead.
    4. Move both slow and fast pointers one step at a time until fast reaches the end.
    5. Adjust the next pointer of the slow node to skip the target node.
    6. Return the next pointer of the dummy node as the new head.


    Complexity Analysis
    Time Complexity: O(N), since the fast pointer will traverse the entire linked list, where N is the length of the linked list.
    Space Complexity: O(1), constant additional space is used to check unique elements.
*/
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* dummy = new ListNode(0, head);

        ListNode* slow = dummy;
        ListNode* fast = dummy;

        // move fast n+1 steps
        for(int i = 0; i <= n; i++) {
            fast = fast->next;
        }

        while(fast) {
            slow = slow->next;
            fast = fast->next;
        }

        slow->next = slow->next->next;

        return dummy->next;
    }
};


/*
    APPROACH: BRUTE FORCE -> Using Length of Linked List
    Intuition:
        The idea is to first calculate the length of the linked list, then determine the position of the node to be removed from the start of the list. 
        We can then traverse the list again to find the node just before the target node and adjust its next pointer to skip the target node.
    step:
    1. Calculate the length of the linked list.
    2. Determine the position of the node to be removed from the start of the list, which is length - n.
    3. If the position is 0, it means we need to remove the head node, so we can simply return the next node as the new head.
    4. Otherwise, traverse the list to find the node just before the target node and adjust its next pointer to skip the target node.
    5. Return the head of the modified linked list. 

    Time Complexity: O(l) + O(l-N), where N is the length of the linked list, since we need to traverse the list twice (once to calculate the length and once to remove the target node).
    Space Complexity: O(1), constant additional space is used to check unique elements.
*/

class Solution { 
private:
int getLength(ListNode* head){
    int count = 0;
    if(head==nullptr){
        return count ;
    }
    while(head!=nullptr){
        head=head->next;
        count++;
    }
    return count;
}
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int s = getLength(head);
        int k = s-n;
        if(k==0){
            head=head->next;
            return head;
        }
        ListNode* curr = head , *prev = nullptr;
        int i=0;
        while(i<k){
            prev = curr;
            curr = curr->next;
            i++;
        }
        prev ->next= curr->next;
        return head;
    }
};