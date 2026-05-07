/*
You are given the head of a linked list. You have to sort the given linked list using Merge Sort.
Examples:
Input:
Output: 10 -> 20 -> 30 -> 40 -> 50 -> 60
Explanation: After sorting the given linked list, the resultant list will be:
Input:

Output: 2 -> 5 -> 8 -> 9
Explanation: After sorting the given linked list, the resultant list will be:
Constraints:
1 ≤ number of nodes ≤ 105
0 ≤ node->data ≤ 106
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
/*
    APROACH:
    1. Base case: If the list is empty or has only one node, it's already sorted, so we return the head.
    2. Split the linked list into two halves using the fast and slow pointer technique. The slow pointer will point to the middle node.
    3. Recursively call mergeSort on both halves of the linked list.
    4. Merge the two sorted halves using a helper function that merges two sorted linked lists.
    5. Return the head of the merged linked list, which will be the sorted linked list.

    TIME COMPLEXITY: O(n log n) - due to the divide and conquer approach of merge sort.
    SPACE COMPLEXITY: O(log n) - we are merging in place without using extra space for the nodes, 
                            but the recursive stack space will be O(log n) in the average case
*/
class Solution {
public:

    Node* findMiddle(Node* head){
        Node* slow = head;
        Node* fast = head->next;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    Node* merge(Node* left, Node* right){
        Node dummy(0);
        Node* tail = &dummy;

        while(left && right){
            if(left->data < right->data){
                tail->next = left;
                left = left->next;
            } else {
                tail->next = right;
                right = right->next;
            }
            tail = tail->next;
        }

        if(left) tail->next = left;
        if(right) tail->next = right;

        return dummy.next;
    }

    Node* mergeSort(Node* head) {
        // Base case
        if(!head || !head->next) return head;

        // Split
        Node* middle = findMiddle(head);
        Node* head2 = middle->next;
        middle->next = NULL;

        Node* head1 = head;

        // Recursion
        head1 = mergeSort(head1);
        head2 = mergeSort(head2);

        // Merge
        return merge(head1, head2);
    }
};