/*
Subarray range with given sum
Given an unsorted array of integers arr[], and a target tar, determine the number of subarrays whose elements sum up to the target value.

Examples:

Input: arr[] = [10, 2, -2, -20, 10] , tar = -10
Output: 3
Explanation: Subarrays with sum -10 are: [10, 2, -2, -20], [2, -2, -20, 10] and [-20, 10].
Input: arr[] = [1, 4, 20, 3, 10, 5] , tar = 33
Output: 1
Explanation: Subarray with sum 33 is: [20,3,10].
Expected Time Complexity: O(n)
Expected Auxilary Space: O(n)

Constraints:
1 <= arr.size() <= 106
-105 <= arr[i] <= 105
-105 <= tar <= 105
*/
class Solution {
  public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int>& arr, int tar) {
        // Your code here
        // hashmap 
        int res = 0 , curr = 0;
        map<int,int> map;  // element : count
        for(int i =0;i<arr.size();i++){
            curr+=arr[i];
            
            if(curr == tar) res++;
            
            if(map[curr-tar]) res+=map[curr -tar];
            
            map[curr]++;
        }
        return res;
       
    }
};