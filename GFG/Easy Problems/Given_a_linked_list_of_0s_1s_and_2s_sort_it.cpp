/*
Given a linked list of 0s, 1s and 2s, sort it
Given a linked list of N nodes where nodes can contain values 0s, 1s, and 2s only. 
The task is to segregate 0s, 1s, and 2s linked list such that all zeros segregate 
to head side, 2s at the end of the linked list, and 1s in the mid of 0s and 2s.
Example 1:
Input:
N = 8
value[] = {1,2,2,1,2,0,2,2}
Output: 0 1 1 2 2 2 2 2
Explanation: All the 0s are segregated
to the left end of the linked list,
2s to the right end of the list, and
1s in between.
Example 2:
Input:
N = 4
value[] = {2,2,0,1}
Output: 0 1 2 2
Explanation: After arranging all the
0s,1s and 2s in the given format,
the output will be 0 1 2 2.
Your Task:
The task is to complete the function segregate() which segregates the nodes in 
the linked list as asked in the problem statement and returns the head of the 
modified linked list. The printing is done automatically by the driver code.
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
Constraints:
1 <= N <= 106
*/

    //Function to sort a linked list of 0s, 1s and 2s.
// Approach-1 Most Optimized Approach
// Time COmplexity O(n)
// Space Complexity O(1)
class Solution
{
    public:
void insertAtTail(Node* &tail, Node* curr ) {
    tail -> next = curr;
    tail = curr;
}
Node* sortList(Node *head)
{
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;
    
    Node* curr = head;
    
    // create separate list 0s, 1s and 2s
    while(curr != NULL) {
        
        int value = curr -> data;
        
        if(value == 0) {
            insertAtTail(zeroTail, curr);
        }
        else if(value == 1) {
            insertAtTail(oneTail, curr);
        }
        else if(value == 2) {
            insertAtTail(twoTail, curr);
        }       
        curr = curr -> next;
    }
    
    //merge 3 sublist
    
    // 1s list not empty
    if(oneHead -> next != NULL) {
        zeroTail -> next = oneHead -> next;
    }
    else {
        //1s list -> empty
        zeroTail -> next = twoHead -> next;
    }
    
    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;
    
	//setup head 
    head = zeroHead -> next;
    
    //delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    
    return head;
}
};
// Approach-2 Optimized Approach
// Time COmplexity O(n)
// Space Complexity O(1)
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        int count0 = 0 ,count1 = 0 ,count2 =0 ;
        Node* curr = head;
        while(curr){
            if(curr->data == 0 ) count0++;
            else if(curr->data == 1) count1++;
            else count2++;
            curr = curr->next;
        }
        curr = head;
        while(curr){
            if(count0){
                curr->data = 0;count0--;
            }
            else if(count1){ curr->data =1 ;count1--;}
            else if(count2) {curr->data =2 ;count2--;}
            curr = curr->next;
        }   
        return head;
    }
};
