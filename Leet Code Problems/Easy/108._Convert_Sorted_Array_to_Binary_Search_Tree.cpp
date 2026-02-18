/*
108. Convert Sorted Array to Binary Search Tree
Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.

Example 1:
Input: nums = [-10,-3,0,5,9]
Output: [0,-3,9,-10,null,5]
Explanation: [0,-10,5,null,-3,null,9] is also accepted:

Example 2:
Input: nums = [1,3]
Output: [3,1]
Explanation: [1,null,3] and [3,1] are both height-balanced BSTs.

Constraints:
1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums is sorted in a strictly increasing order.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
/*
    Using Recurision
    Time Complexity: O(n)
    Space Complexity: O(n)
*/
class Solution {
    public:
    TreeNode* solve(vector<int>&arr,int i,int j){
        if(i>j) return nullptr;
        int mid = i+(j-i)/2;
        TreeNode* root = new TreeNode(arr[mid]);
        root->left = solve(arr,i,mid-1);
        root->right = solve(arr,mid+1,j);
        return root;
    }
        TreeNode* sortedArrayToBST(vector<int>& nums) {
            int i =0  ,  j = nums.size()-1;
            return solve(nums,i,j);
        }
    };