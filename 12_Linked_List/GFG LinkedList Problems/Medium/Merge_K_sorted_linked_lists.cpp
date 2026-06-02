/*
Merge K sorted linked lists
Given an array arr[] of n sorted linked lists of different sizes. Your task is to merge all these lists into a single sorted linked list and return the head of the merged list.
Examples:
Input:
Output: 1 -> 2 -> 3 -> 4 -> 7 -> 8 -> 9
Explanation: The arr[] has 3 sorted linked list of size 3, 3, 1.
1st list: 1 -> 3 -> 7
2nd list: 2 -> 4 -> 8
3rd list: 9
The merged list will be: 
Input:   
Output: 1 -> 3 -> 4 -> 5 -> 6 -> 8
Explanation: The arr[] has 3 sorted linked list of size 2, 1, 3.
1st list: 1 -> 3
2nd list: 8
3rd list: 4 -> 5 -> 6
The merged list will be: 
Constraints
1 ≤ total no. of nodes ≤ 105
1 ≤ node->data ≤ 103
*/


/*
    [Optimized Approach - 1] - Using Min Heap (Works better for unequal sized lists)
    Algorithm:
    1. Initialise a priority queue such that each element is a pair/tuple consisting of an integer (int) representing the node’s data value and a pointer to the node
        - This is done because a priority queue maintains a collection of elements with a priority, allowing operations to access and manipulate the element with the highest (or lowest) priority efficiently.
        - Using a pair as its elements allows the priority queue to order elements in ascending order of the integer values ie. based on the node data.

    2. Push the heads of all K linked lists into the priority queue.

    3. Create a dummy node to build the merge list.
    4. Iterate while the priority queue is not empty and extract from the top of the priority queue ie. node with the minimum node value.
        - If the current extracted node has a next node, push the next node into the priority queue and set the next pointer of the current node in the merged list.

    5. Return the merged linked list starting from the next of the dummy nodes    
    
    Time Complexity: O(K log K) + O(N*K*(3*log K))
    Space Complexity : O(K) 

*/
class Solution {
  public:
    Node* mergeKLists(vector<Node*>& listArray) {
        // code here
        // Priority queue to maintain
    // sorted order based on node values
    // Pairs store node value and pointer to the node
    priority_queue<pair<int, Node*>,
        vector<pair<int, Node*>>, greater<pair<int, Node*>>> pq;
    
    // Push the heads of all the
    // linked lists into the priority queue
    for(int i = 0; i < listArray.size(); i++){
        // Check if the current linked list exists
        if(listArray[i]){
            // Push the pair of node data and
            // node pointer into the priority queue
            pq.push({listArray[i]->data, listArray[i]});
        }
    }
    
    // Create a dummy node to build the merged list
    Node* dummyNode = new Node(-1);
    Node* temp = dummyNode;
    
    // Merge the lists present
    // in the priority queue
    while(!pq.empty()){
        // Get the top element (minimum node value)
        // from the priority queue
        auto it = pq.top();
        pq.pop();
        
        // Check if the current
        // node has a next node
        if(it.second->next){
            // Push the next node
            // into the priority queue
            pq.push({it.second->next->data, it.second->next});
        }
        
        // Set the next pointer of the
        // current node in the merged list
        temp->next = it.second;
        temp = temp->next;
    }
    
    // Return the merged linked list
    return dummyNode->next;
    }
};

/*
    APPROACH: By Merging List One by One
    Step:
    1. Create a helper function merge2List that takes two linked lists as input and merges them into a single sorted linked list.
    2. In the main function mergeKLists, initialize a newHead pointer to the first linked list in the array.
    3. Iterate through the array of linked lists starting from the second linked list, and for each linked list, merge it with the newHead using the merge2List function.
    4. After merging all the linked lists, return the newHead pointer, which will point to the head of the merged linked list.

    Time Complexity: O(N * K) - where N is the total number of nodes across all linked lists and K is the number of linked lists. This is because we are merging K linked lists one by one, and each merge operation takes O(N) time in the worst case.
    Space Complexity: O(1) - we are merging the linked lists in place without using      

*/
class Solution {
  public:
   Node* merge2List(Node* head1 , Node* head2){
       Node* newHead = new Node(-1);
       Node* newTail = newHead;
       Node* temp = newHead;
       while(head1 && head2){
           if(head1->data > head2->data){
               newTail->next = new Node(head2->data);
               newTail= newTail->next;
               head2 = head2->next;
           }
           else {
               newTail ->next = new Node(head1->data);
               newTail = newTail->next;
               head1 = head1->next;
           }
       }
       if(head1) newTail ->next = head1;
       else newTail ->next = head2;
       return newHead->next;
   }
    Node* mergeKLists(vector<Node*>& arr) {
        // code here
        Node* newHead = arr[0];
        for(int i =1;i<arr.size();i++){
            newHead = merge2List(newHead,arr[i]);
        }
        return newHead;
    }
};

/*
    APPROACH:
    1. Create a vector to store all the elements from the linked lists.
    2. Iterate through each linked list and push all the elements into the vector.
    3. Sort the vector to get all the elements in sorted order.
    4. Create a new linked list and populate it with the sorted elements from the vector.
    5. Return the head of the new linked list.

    Time Complexity: O(N log N) - where N is the total number of nodes across all linked lists, due to the sorting step.
    Space Complexity: O(N) - we are using extra space to store the elements in the

*/
class Solution {
  public:
    Node* mergeKLists(vector<Node*>& arr) {
        // code here
        vector<int> res;
        for(Node* head:arr){
            Node* temp  = head;
            while(temp){
                res.push_back(temp->data);
                temp = temp->next;
            }
        }
        sort(res.begin(),res.end());
        Node* newList = new Node(res[0]);
        Node* temp = newList;
        for(int i=1;i<res.size();i++){
            Node* node = new Node(res[i]);
            temp->next = node;
            temp = node;
        }
        return newList;
    }
};