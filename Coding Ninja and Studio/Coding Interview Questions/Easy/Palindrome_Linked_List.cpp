/*
Palindrome Linked List
Sample Input 1 :
2
1 2 3 4 5 6 -1
1 2 1 -1
Sample Output 1 :
false
true
Explanation for sample 1:
For the first test case, it is not a palindrome because Linked List doesn't have the same order of elements when traversed forwards and backwards​.

For the second test case, it is a palindrome linked list because a Linked List has the same order of elements when traversed forwards and backwards​.
Sample Input 2 :
2
1 -1
1 10 45 10 1 -1
Sample Output 2 :
true
true
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
// Optimized Method
// Time Complexity O(n)
// Space Complexity O(n)
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    vector<int> ans ;
    LinkedListNode<int>* curr = head;
    while(curr!=nullptr){
        ans.push_back(curr->data);
        curr = curr->next;
    }
    int i=0 , j = ans.size()-1;
    while(i<j){
        if(ans[i]!=ans[j]){
            return 0;
        }
        i++;j--;
    }
    return 1;

}