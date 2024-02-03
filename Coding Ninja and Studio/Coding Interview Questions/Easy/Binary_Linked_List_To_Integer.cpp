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
#include<bits/stdc++.h>
// Most Optimized Methods
// Time Complexity O(n)
// Space Complexity O(1)
int binaryToInteger(int n, Node *head) {
     int i=0;
        Node *ptr=head;
        while(ptr!=nullptr)
        {
            i+=ptr->data;
            ptr=ptr->next;
            if(ptr!=nullptr)
                 i=i*2;
        
            i%=MOD;
        }
        return i;
        }
//  Optimized Methods
// Time Complexity O(n)
// Space Complexity O(1)
int binaryToInteger(int n, Node *head) {
    //    Write your code here
    int ans = 0 ;
    if(head==NULL){
        return ans;
    }
    while(n>0 && head!=NULL){
                n--;
        ans += head->data * pow(2,n);
        head=head->next;
    }
    return ans;
}
