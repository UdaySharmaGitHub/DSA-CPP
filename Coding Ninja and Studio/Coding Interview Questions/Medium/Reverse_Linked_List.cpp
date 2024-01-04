/*
Sample Input 1 :
1
1 2 3 4 5 6 -1
Sample Output 1 :
6 5 4 3 2 1 -1
Explanation For Sample Input 1 :
For the first test case,  After changing the next pointer of each node to the previous node, The given linked list is reversed.
Sample Input 2 :
1
10 21 3 2 4 -1
Sample Output 2 :
4 2 3 21 10 -1

*/
#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *curr=head , *prev =nullptr,*nextprev;
    while(curr!=nullptr){
        nextprev=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextprev;
    }
return prev;
}