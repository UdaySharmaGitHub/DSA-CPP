/*
Find length of Loop
Given the head of a linked list, determine whether the list contains a loop. If a loop is present, return the number of nodes in the loop, otherwise return 0.

Note: Internally, pos(1 based index) is used to denote the position of the node that tail's next pointer is connected to. If pos = 0, it means the last node points to null, indicating there is no loop. Note that pos is not passed as a parameter.

Examples:

Input: pos = 2,
   
Output: 4
Explanation: There exists a loop in the linked list and the length of the loop is 4.
Input: pos = 3,
   
Output: 3
Explanation: The loop is from 19 to 10. So length of loop is 19 → 33 → 10 = 3.
Input: pos = 0,
    
Output: 0
Explanation: There is no loop.
Constraints:
1 ≤ number of nodes ≤ 105
1 ≤ node->data ≤ 104
0 ≤ pos < number of nodes
*/
/*
    Space Optimized Approach to find the length of the loop in a linked list.
    Time Complexity: O(N), Only one traversal of the loop is needed.
    Auxiliary Space: O(1), No extra space is used.
*/
class Solution {
  public:
    Node* floyAlgoStartNode(Node* head){
        Node* slow = head , *fast = head;
        while(slow  && fast && fast->next){
            slow = slow ->next;
            fast = fast->next->next;
            if(fast == slow) return slow;
        }
        return nullptr;
    }
    int lengthOfLoop(Node *head) {
        // code here
        Node* startNode = floyAlgoStartNode(head);
        if(!startNode) return 0;
        int len = 1;
        Node* temp = startNode;
        while(temp->next != startNode){temp=temp->next;len++;}
        return len;
    }
};
/*
    Using Hashing (unordered_map) to find the length of the loop in a linked list.
    Time Complexity: O(N), Only one traversal of the loop is needed.
    Auxiliary Space: O(N), N is the space required to store the value in the hashmap
*/
class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        int counter =1 ;
        unordered_map<Node*,int> map;
        while(head){
            if(map[head]) return (counter - map[head]);
            map[head]=counter;
            head = head->next;
            counter++;
        }
        return 0;
    }
};

/*
    // Another approach to find the length of the loop in a linked list.
    Using the Floyd’s Cycle Detection Algorithm (Tortoise and Hare Algorithm) to find the length of the loop in a linked list.
    Time Complexity: O(N), Only one traversal of the loop is needed.
    Auxiliary Space: O(N), N is the space required to store the value in the hashmap
*/
class Solution {
  public:
  bool checkLoop(Node* head){
      Node* slow = head ,* fast = head;
      while(slow && fast && fast->next){
          slow = slow->next;
          fast = fast->next->next;
          if(slow == fast) return 1;
      }
      return 0;
  }
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        if(checkLoop(head)==0) return 0;
        Node* loops = nullptr;
    unordered_map<Node*,bool> map;
    while(head){
        if(map[head])break;
        map[head] =1;
        head = head->next;
    }
    int count = 1;
    loops = head;
    while(head->next !=loops && head)count++, head=head->next;
    return count;
    }
};