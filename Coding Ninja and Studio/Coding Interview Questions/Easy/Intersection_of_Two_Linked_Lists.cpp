/*
 Intersection of Two Linked Lists
Sample Input 1 :
4 1 -1
5 6 -1
8 -1
Sample Output 1 :
8
Explanation For Sample Input 1:
As shown in the diagram, the node with data is 8, at which merging starts

Sample Input 2 :
1 9 1 -1
3 -1
2 -1
Sample Output 2 :
2
Constraints :
-10^9 <= data <= 10^9 and data != -1
 The length of both the linked list is positive.
 Time Limit: 1 sec
*/
#include<bits/stdc++.h>
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };

*****************************************************************/
int lengthfinder(Node* abc){

        int len=0;

        while(abc!=NULL){

            abc=abc->next;

            len++;

        }

        return len;

    }

 

Node* findIntersection(Node *headA, Node *headB)

{

    //Write your code here

    int lenA=lengthfinder(headA);

        int lenB=lengthfinder(headB);

            while(lenB>lenA){

                headB=headB->next;

                lenB--;

            }

            while(lenB<lenA){

                headA=headA->next;

                lenA--;

            }

                while(headA!=NULL && headB!=NULL){

            if(headA==headB){

                return headA;

            }

            headA=headA->next;

            headB=headB->next;

        }

        return NULL;

}