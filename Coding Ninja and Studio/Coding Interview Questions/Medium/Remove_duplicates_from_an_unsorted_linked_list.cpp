/*
Sample Input 1 :
2
4 2 5 4 2 2 -1
1 2 1 2 2 2 7 7 -1
Sample Output 1 :
4 2 5 -1
1 2 7 -1
Explanation of Sample Input1 :
For the first test case, the linked list is 4 -> 2 -> 5 -> 4 -> 2 -> 2 -> NULL. Number ‘4’ and ‘2’ occurs more than once. Hence, we remove the duplicates and keep only their first occurrence. So, our list becomes : 4 -> 2 -> 5 -> NULL.

For the second test case, the linked list is 1 -> 2 -> 1 -> 2 -> 2 -> 2 -> 7 -> 7 -> NULL. Number ‘1’, ‘2’ and ‘7’ occurs more than once. Hence, we remove the duplicates and keep only their first occurrence. So, our list becomes : 1 -> 2 -> 7 -> NULL.
Sample Input 2 :
2
3 3 3 3 3 -1
10 20 10 20 30 10 20 30 -1
Sample Output 2 :
3 -1
10 20 30 -1
*/
#include <bits/stdc++.h> 
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
 //Most Optimized Approach // Set
// Time Complexity O(n)
// Space Complexity O(n)
    Node * removeDuplicates(Node* head){
        Node* curr= head;
        Node* prev = nullptr;
        set<int> set;
        while(curr!=nullptr){
            if(set.count(curr->data)){
                prev->next = curr->next;
            }
            else{
                prev=curr;
                set.insert(curr->data);
            }
            curr=curr->next;
        }
        return head;
    }
 // Optimized Approach // unoredered_Set
// Time Complexity O(n)
// Space Complexity O(n)
    Node * removeDuplicates1(Node* head){
        Node* curr= head;
        Node* prev = nullptr;
        unordered_set<int> set;
        while(curr!=nullptr){
            if(set.find(curr->data)!=set.end()){
                prev->next = curr->next;
            }
            else{
                prev=curr;
                set.insert(curr->data);
            }
            curr=curr->next;
        }
        return head;
    }
 // least Optimized Approach 
// Time Complexity O(n^2)
// Space Complexity O(1)
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates2( Node *head) 
    {
     // your code goes here
     Node* curr = head;
     while(curr!=nullptr ){
         Node* temp = curr->next;
         while(temp!=nullptr){
             if(temp->data==curr->data){
                 curr->next= temp->next->next;
             }
             else{
                 temp = temp->next;
             }
         }
       curr=curr->next;
         
     }
     return head;
        
    }