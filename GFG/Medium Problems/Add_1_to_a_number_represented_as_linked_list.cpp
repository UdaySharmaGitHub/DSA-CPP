/*
Add 1 to a number represented as linked list
A number N is represented in Linked List such that each digit corresponds to a node in linked list. You need to add 1 to it.
Example 1:
Input:
LinkedList: 4->5->6
Output: 457
Explanation: 4->5->6 represents 456 and when 1 is added it becomes 457. 
Example 2:
Input:
LinkedList: 1->2->3
Output: 124 
Your Task:
Your task is to complete the function addOne() which takes the head of the linked list as the only argument and returns the head of the modified linked list. The driver code prints the number.
Note: The head represents the left-most digit of the number.
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
Constraints:
1 <= N <= 1021
*/
// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

/*
    APPROACH 1; Using Recursion to add 1 to the number represented as linked list.
    Steps:
    1. Define a recursive helper function that takes a node as an argument and returns the carry after adding 1 to the number represented by the linked list starting from that node.
    2. In the helper function, if the node is null, return 1 (since we want to add 1).
    3. Recursively call the helper function for the next node and store the carry returned by the recursive call.
    4. Update the current node's data by adding the carry to it.
    5. If the updated data is less than 10, return 0 (no carry needed for the next node).
    6. If the updated data is 10 or greater, set the current node's data to 0 and return 1 (carry needed for the next node).    

    Time Complexity: O(N) since we are traversing the linked list once.The recursive calls will be made for each node in the linked list.
    Space Complexity: O(N) due to the recursive call stack. In the worst case, if all digits are 9, the recursion will go as deep as the length of the linked list,
*/

class Solution {
  public:
  int helper(Node* head){
      if(!head) return 1;
      int carry= helper(head->next);
      head ->data = head->data+carry;
     if(head->data<10) return 0;
     head->data = 0;
     return 1;
  }
    Node* addOne(Node* head) {
        // code here
        int carry = helper(head);
        if(carry == 1){
            Node* node = new Node(1);
            node->next= head;
            head = node;
        }
        return head;
    }
};

/*
    APPROACH 2 : By reversing the linked list and then adding 1 to the number and then again reversing the linked list to get the final answer.
    Steps:
1. Reverse the linked list.
2. Initialize a variable carry with 1 (since we want to add 1).
3. Traverse the reversed linked list:
   a. For each node, calculate the sum of the node's data and the carry.
   b. Update the node's data to be the last digit of the sum (sum % 10).
   c. Update the carry to be the quotient of the sum divided by 10 (sum / 10).
   d. If the carry becomes 0, break out of the loop as no further addition is needed.
   e. If you reach the end of the list and still have a carry, create a new node with the carry value and attach it to the end of the list.
4. Reverse the linked list again to restore the original order.

Time Complexity: O(3N) for reversing the linked list twice and traversing it once.
Space Complexity: O(1) since we are modifying the linked list in place and not using any extra space for another linked list.

*/
//-------------------------------------MOST OPTIMIZED APPRAOCH ---------------------------------------//
class Solution {
  public:
    Node* reverse(Node* head ){
      Node*  prev  = nullptr , *curr = head , *nxt = nullptr;
      while(curr){
          nxt = curr->next;
          curr->next  = prev;
          prev = curr;
          curr =nxt;
      }
      return prev;
  }
    Node* addOne(Node* head) {
        // Your Code here
        // return head of list after adding one
        int carry = 1;
        if(!head ) return head;
        head = reverse(head);
        Node* curr = head;
        while(curr){
            int sum  =curr->data+ carry;
            carry = sum/10;
            curr->data = sum%10;
            if(carry==0) break;
            if(!curr->next && carry > 0){
                curr->next = new Node(carry);
                carry = 0;
            }
            curr = curr->next;
        }
        head = reverse(head);
        return head;
        
    }
};
//-------------------------------------Long APPRAOCH ---------------------------------------//
class Solution
{
    private:
    Node* reverse(Node* head){
        Node* curr = head;
        Node* prev = nullptr;
        Node* nxt = nullptr;
        while(curr!=nullptr){
            nxt= curr->next;
            curr->next= prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    void insertAtTail(Node* &head,Node* &tail,int x){
        Node* node = new Node(x);
        if(head==nullptr){
            head =node;
            tail = node;
            return ;
        }
        tail->next = node;
        tail =node;
    }
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node* ansHead = nullptr , *ansTail = nullptr;
        int addOne =1;
    head =reverse(head);
    int carry = 0 ;
    while(head!=nullptr  || carry!=0){
        int val = 0 ;
        if(head!=nullptr){
            val = head->data;
        }
        int sum = addOne+val+carry;
        int digit = sum%10;
        carry = sum/10;
        insertAtTail(ansHead,ansTail,digit);
                if(addOne==1){
            addOne--;   
        }
        if(head!=nullptr){
            head=head->next;
        }
    }
    ansHead  = reverse(ansHead);
    return ansHead;
    }
};
