/*
Pair Sum in Doubly Linked List
Given a sorted doubly linked list of positive distinct elements, the task is to find pairs in a doubly-linked list whose sum is equal to given value target.

 

Example 1:

Input:  
1 <-> 2 <-> 4 <-> 5 <-> 6 <-> 8 <-> 9
target = 7
Output: (1, 6), (2,5)
Explanation: We can see that there are two pairs 
(1, 6) and (2,5) with sum 7.
 

Example 2:

Input: 
1 <-> 5 <-> 6
target = 6
Output: (1,5)
Explanation: We can see that there is one pairs  (1, 5) with sum 6.

 

Your Task:
You don't need to read input or print anything. Your task is to complete the function findPairsWithGivenSum() which takes head node of the doubly linked list and an integer target as input parameter and returns an array of pairs. If there is no such pair return empty array.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
Constraints:
1 <= N <= 105
1 <= target <= 105
*/
// User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/
/*
    APPROACH:
    1. We can use two pointers to find pairs with given sum in a sorted doubly linked list.
    2. We can initialize two pointers, one pointing to the head of the list and the other pointing to the tail of the list.
    3. We can then iterate through the list and check if the sum of the values at the two pointers is equal to the target. If it is, we can add the pair to the result vector and move both pointers towards the center of
         the list. If the sum is less than the target, we can move the left pointer to the right to increase the sum. If the sum is greater than the target, we can move the right pointer to the left to decrease the sum.
        4. We can continue this process until the left pointer is less than the right pointer.
        5. Finally, we can sort the result vector and return it.

    Time Complexity: O(N)
    Space Complexity: O(N) for the result vector, O(1) for the two pointers.
*/
class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        // code here
        unordered_map<int,int> map;
        vector<pair<int,int>> res;
        while(head){
            if(map[target - head->data]){
                res.push_back({target-head->data , head->data});
            }
            map[head->data]++;
            head = head->next;
        }
        sort(res.begin(),res.end());
        return res;
    }
};