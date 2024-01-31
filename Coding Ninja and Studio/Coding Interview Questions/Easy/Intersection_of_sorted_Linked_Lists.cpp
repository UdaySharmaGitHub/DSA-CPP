/*
Intersection of Linked Lists
Sample Input 1 :
2
1 3 5 -1
1 2 4 -1
2 3 -1
2 3 4 -1
Sample Output 1 :
1 -1
2 3 -1
Explanation for Sample Output 1 :
In the first test case, the intersecting linked list is 1, so the node containing 1 is returned.

In the second test case, the intersecting linked list is 2->3, so the node containing 2 is returned.
Sample Input 2 :
1
2 3 4 -1
1 5 6 -1
Sample Output 2 :
-1 
*/
#include <bits/stdc++.h> 
/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

************************************************************/
void insertAtEnd(Node* &tail,int x){
    Node* node = new Node(x);
    tail->next=node;
    tail=node;
}
Node* intersect_ll(Node* L1, Node *L2){

    // Write your code here.
    if(L1==nullptr || L2== nullptr){
        return nullptr;
    }
    Node* ans = new Node(-1);
    Node* temp = ans;
    while(L1!=nullptr && L2!=nullptr){
        if(L1->data > L2->data){
            L2=L2->next;
        }
        else if(L1->data < L2->data){
            L1=L1->next;
        }
        else if(L1->data == L2->data){
            insertAtEnd(temp,L1->data);
            L1=L1->next;
            L2=L2->next;
        }
    }
    ans = ans ->next;
    return ans;
}