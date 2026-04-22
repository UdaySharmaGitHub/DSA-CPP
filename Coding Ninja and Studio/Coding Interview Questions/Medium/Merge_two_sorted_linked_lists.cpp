/*
Merge two sorted linked lists
Given two sorted linked lists consisting of N and M nodes respectively. The task is to merge both of the list (in-place) and return head of the merged list.
Example 1:
Input:
N = 4, M = 3 
valueN[] = {5,10,15,40}
valueM[] = {2,3,20}
Output: 2 3 5 10 15 20 40
Explanation: After merging the two linked
lists, we have merged list as 2, 3, 5,
10, 15, 20, 40.
Example 2:
Input:
N = 2, M = 2
valueN[] = {1,1}
valueM[] = {2,4}
Output:1 1 2 4
Explanation: After merging the given two
linked list , we have 1, 1, 2, 4 as
output.
Your Task:
The task is to complete the function sortedMerge() which takes references to the heads of two linked lists as the arguments and returns the head of merged linked list.
Expected Time Complexity : O(n+m)
Expected Auxilliary Space : O(1)
Constraints:
1 <= N, M <= 104
0 <= Node's data <= 105
*/
/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
// Most Optimized Approach
// Time Complexity O(n)
// Space Complexity O(1)
/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        if(!head1 && !head2) return nullptr;
        if(!head1) return head2;
        if(!head2) return head1;
        Node* res = new Node(-1);
        Node* temp = res;
        while(head2  && head1){
            if(head1 ->data >head2->data){
                temp->next = head2;
                temp = head2;
                head2 = head2->next;
            }
            else{
                temp->next = head1;
                temp = head1;
                head1 =head1->next;
            }
        }
        if(!head1) temp->next =head2;
        else temp->next = head1;
        return res->next;
    }
}; 