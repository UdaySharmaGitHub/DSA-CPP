/*
Linked List Cycle II
Problem statement
You are given a singly linked list that may or may not contain a cycle. You are supposed to return the node where the cycle begins, if a cycle exists, else return 'NULL'.



A cycle occurs when a node's next pointer returns to a previous node in the list.



Example:
In the given linked list, there is a cycle starting at position 0, hence we return 0.



Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
1 2 3 4 -1
1


Sample Output 1 :
1


Explanation For Sample Input 1 :
For the first test case,


Sample Input 2 :
1 2 3 4 -1
0


Sample Output 2 :
0


Explanation For Sample Input 2 :
For the first test case,


Follow-Up:
Can you do this in O(n) time and using constant space?


Constraints :
-10^4 <= n <= 10^4
-1 <= pos < n
-10^9 <= data <= 10^9 and data != -1

Time Limit: 1 sec
*/
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/
#include<bits/stdc++.h>
// Most Optimized Approach
// Time Complexity O(n)
// Space Complexity O(1)
Node* floydDetectLoop(Node* head) {
    if(head == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;
    while(slow != NULL && fast !=NULL) {
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }
        slow = slow -> next;
        if(slow == fast) {
            return slow;
        }
    }
    return NULL;
}
// With the Help of FloydCycle Detection Algorithm
Node* getStartingNode(Node* head) {
    if(head == NULL) 
        return NULL;

    Node* intersection = floydDetectLoop(head);
    
    if(intersection == NULL)
        return NULL;
    
    Node* slow = head;

    while(slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }  

    return slow;
}
Node *firstNode(Node *head)
{
    //    Write your code here.
        if(head==nullptr){
            return nullptr;
        }
  return getStartingNode(head);
}
// Optimized Approach
// Time Complexity O(n)
// Space Complexity O(n)
Node *firstNode(Node *head)
{
    //    Write your code here.
    Node* temp = head;
    unordered_map<Node* , bool> visited;
    while(temp!=nullptr){
        if(visited[temp]==1){
          return temp;
        }
        visited[temp]=1;
        temp = temp->next;
    }
    return nullptr;
}