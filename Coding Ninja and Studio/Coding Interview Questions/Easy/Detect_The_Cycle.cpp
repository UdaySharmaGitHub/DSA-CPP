/*
 Detect The Cycle
Problem statement
Kevin has given you a Singly Linked List that contains only integers. You have to determine if it forms a cycle or not.
A cycle occurs when a node's next pointer points back to a previous node in the list.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
0 <= N <= 10^6
-1 <= POS < N
-10^9 <= DATA <= 10^9 and DATA != -1
Where 'N' is the size of the singly linked list, 'POS' represents the position (0-indexed) in the linked list where the tail connects to and 'DATA' is the Integer data of the singly linked list.
Time Limit: 1 sec
Sample Input 1 :
3 2 0 -4 -1
1
Sample Output 1 :
true
Explanation of Sample Input 1:
The linked list has a cycle that connects back to index 1.
Sample Input 2 :
1 -1
-1
Sample Output 2 :
false
*/
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

bool detectCycle(Node *head){
	//	Write your code here.
	if(head==nullptr || head->next == nullptr){
		return 0;
	}
	Node* slow = head , *fast = head;
	while(fast!=nullptr && fast->next!=nullptr){
		slow = slow->next;
		fast=fast->next;
		if(fast!=nullptr){
			fast=fast->next;
		}
		if(fast==slow){
			return 1;
		}
	}
	return 0;
}