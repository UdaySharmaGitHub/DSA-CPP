/*
Complete Binary Tree Traversal with Array Input
Given an integer array arr[] representing the nodes of a Complete Binary Tree in level order traversal, return the nodes at each level in sorted ascending order.

For every level of the binary tree, sort the values present at that level independently and return the resulting levels as a 2D array, where the i-th row contains the sorted values of the i-th level.

Examples:

Input: arr[] = [7, 6, 5, 4, 3, 2, 1]
Output: [[7], [5, 6], [1, 2, 3, 4]]
Explanation: The complete binary tree formed from the given level order traversal is:   
        
The nodes at each level after sorting are:
Level 0: [7]
Level 1: [5, 6]
Level 2: [1, 2, 3, 4]
Input: arr[] = [7, 16, 1, 4, 13]
Output: [[7], [1, 16], [4, 13]]
Explanation: The complete binary tree formed from the given level order traversal is:      
           
The nodes at each level after sorting are:
Level 0: [7]
Level 1: [1, 16]
Level 2: [4, 13]

Constraints:

1 ≤ arr.size() ≤ 104
1 ≤ arr[i] ≤ 109
*/
/*
        APPROACH:
        1. Build a complete binary tree from the given array.
        2. Perform level order traversal of the binary tree and store the nodes at each level in a 2D array.
        3. Sort the nodes at each level independently and return the resulting levels as a 2D array.

        Time Complexity: O(n log n)
        Space Complexity: O(n)
*/
class Tree{
    public:
    int data;
    Tree* right,*left;
    
    Tree(int data):data(data),left(nullptr),right(nullptr){}
};
class Solution {
  public:
    vector<vector<int>> levelSort(vector<int>& arr) {
        // code here
        if(arr.size()==0) return {{}};
        
        /*-------------------- Build Binary Tree --------------------
        Time Complexity: O(n)
        Each element of the array is inserted exactly once.
        
        Space Complexity: O(n)
        Queue stores at most one level of the tree.
        */
        Tree* root= new Tree(arr[0]);
        queue<Tree*> q;
        q.push(root);
        int i =1;
        while(i<arr.size()){
            Tree* frontNode= q.front();
            q.pop();
            if(i<arr.size()) {frontNode->left = new Tree(arr[i++]); q.push(frontNode->left);}
            if(i<arr.size()) {frontNode->right = new Tree(arr[i++]); q.push(frontNode->right);}
        }
        vector<vector<int>> res;
        if(!q.empty()) q={};
        
        /* ---------------- Level Order Traversal ----------------
        
        Traversal Cost:
        Time : O(n)
        Every node is visited exactly once.
        
        Sorting Cost:
        Let the sizes of all levels be k1, k2, ..., km.
        Total sorting cost = O(k1 log k1 + k2 log k2 + ... + km log km)
        
        Worst Case: Largest level contains nearly n/2 nodes.
        Therefore, Total Sorting Cost = O(n log n)
        
        Overall Time Complexity = O(n log n)
        Overall Auxiliary Space = O(n)
        */
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int> temp;
            for(int i =0 ; i<n;i++){
                Tree* frontNode = q.front();
                q.pop();
                temp.push_back(frontNode->data);
                if(frontNode ->left ) q.push(frontNode->left);
                if(frontNode ->right ) q.push(frontNode->right);
            }
            sort(temp.begin(),temp.end());
            res.push_back(temp);
        }
        return res;
        
    }
};
