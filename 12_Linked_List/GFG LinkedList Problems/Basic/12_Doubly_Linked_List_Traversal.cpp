/*
Doubly Linked List Traversal
Given a doubly linked list of n elements. The task is to return the doubly linked list as an array.

Note: The driver code will print the list forward and backward.

Examples:

Input: LinkedList: 1<->2<->3<->4<->5
Output:
[1, 2, 3, 4, 5]
[5, 4, 3, 2, 1]
Explanation: After traversing forward the linked list will look like [1, 2, 3, 4, 5] and from backward will [5, 4, 3, 2, 1].
Input: LinkedList: 34<->22
Output:
[34, 22]
[22, 34]
Explanation: After traversing forward the linked list will look like [34, 22] and from backward will [22, 34].
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)

Constraints:
1 <= number of nodes <= 103
0 <= value of nodes <= 103
*/
// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};

*/
// Time Complexity: O(n)
// Space Complexity: O(1)
vector<int> displayList(Node *head) {
    vector<int> res;
    while(head){
        res.push_back(head->data);
        head = head->next;
    }
    return res;
}