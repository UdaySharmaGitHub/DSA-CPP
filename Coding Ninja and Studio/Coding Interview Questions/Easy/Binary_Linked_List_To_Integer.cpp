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