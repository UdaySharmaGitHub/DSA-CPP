/*
Print Linked List
You are given the head of a singly linked list. Return an array containing the values of the nodes.
Examples:
Input:
Output: [1, 2, 3, 4, 5]
Explanation: The linked list contains 5 elements [1, 2, 3, 4, 5]. The elements are printed in a single line.
Input:
Output: [10, 20, 30, 40, 50, 60]
Explanation: The linked list contains 5 elements [10, 20, 30, 40, 50, 60]. The elements are printed in a single line.
Constraints :
1 ≤ numbers of nodes ≤ 105
1 ≤ node values ≤ 106

*/

/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> printList(Node *head) {
        // code here
        vector<int> res;
        while(head){
            res.push_back(head->data);
            head = head->next;
        }
        return res;
    }
};