/*
 Remove duplicates from a sorted Doubly Linked List
 Sample Input 1 :
5
1 2 2 2 3
Sample Output 1 :
1 2 3
Explanation For Sample Input 1 :
We will delete the duplicate values ‘2’ present in the linked list.
Sample Input 2 :
4
1 2 3 4
Sample Output 2 :
1 2 3 4
Explanation For Sample Input 2 :
The list contains no duplicates, so the final list is unchanged.
Expected time complexity :
The expected time complexity is O('n').
Constraints :
1 <= 'n' <= 10^5
1 <= 'data' in any node <= 10^6
Time limit: 1 sec
*/
/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node * removeDuplicates(Node *head)
{
    // Write your code here
    Node* curr = head;
    while(curr->next!=nullptr && curr!=nullptr){
        if(curr->data==curr->next->data){
            curr->next=curr->next->next;
        }
        else{
            curr= curr->next;
        }
    }
    return head;
}
