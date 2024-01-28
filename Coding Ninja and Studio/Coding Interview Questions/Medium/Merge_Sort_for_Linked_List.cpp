/*
Merge Sort for Linked List
Sample Input 1:
3
1 -2 3 -1
9 9 -1
4 -1
Sample Output 1:
-2 1 3 -1
9 9 -1
4 -1
Explanation For Sample Output 1:
For every test case, the sorted list is printed, terminated by -1.
Sample Input 2:
2
1 1 1 -1
3 -3 -1
Sample Output 2:
1 1 1 -1
-3 3 -1
*/
#include <bits/stdc++.h> 
/**********************************************************************

    Following is the class structure of the Node class for reference:

    class Node{
    public:
        int data;
        Node *next;
        Node(int data)
        {
	        this->data = data;
	        this->next = NULL;
        }
    };

********************************************************************/
Node* findMid(Node* head) {
    Node* slow = head;
    Node* fast = head -> next;
    
    while(fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next; 
    }
    return slow;
}
Node* merge(Node* left,Node* right){
    if(right==nullptr){
        return left;
    }
    if(left == nullptr){
        return right;
    }
    Node* ans = new Node(-1);
    Node* temp  = ans;
    while(left!=nullptr && right!=nullptr){
        if(left->data > right->data){
            temp->next = right;
            temp=right;
           right= right->next;
        }
        else{
  temp->next = left;
            temp=left;
           left= left->next;
        }
    }
    while(left!=nullptr){
          temp->next = left;
            temp=left;
           left= left->next;
    }
    while(right!=nullptr){
          temp->next = right;
            temp=right;
           right= right->next;
    }
    ans = ans->next;
    return ans;
}
Node *sortLL(Node *head){
    // Write your code here.
    if(head==nullptr || head->next==nullptr){
        return head;
    }
    Node* mid = findMid(head);
    Node* left = head;
    Node* right = mid->next;
    mid->next=nullptr;

    left = sortLL(left);
    right=sortLL(right);

   Node* result = merge(left,right);
   return result;

}