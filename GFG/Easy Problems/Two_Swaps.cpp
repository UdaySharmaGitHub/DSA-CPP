/*
Two Swaps
Given a permutation of some of the first natural numbers in an array arr[], determine if the array can be sorted in exactly two swaps. A swap can involve the same pair of indices twice.

Return true if it is possible to sort the array with exactly two or zero swaps, otherwise return false.

Examples:

Input: arr = [4, 3, 2, 1]
Output: true
Explanation: First, swap arr[0] and arr[3]. The array becomes [1, 3, 2, 4]. Then, swap arr[1] and arr[2]. The array becomes [1, 2, 3, 4], which is sorted.
Input: arr = [4, 3, 1, 2]
Output: false
Explanation: It is not possible to sort the array with exactly two swaps.
Input: arr = [1, 2, 3, 4]
Output: true
Explanation: It is already sorted array, so no swaps needed.
Constraints:
1 ≤ arr.size() ≤ 106
1 ≤ arr[i] ≤ arr.size()
*/
class Solution {
  public:
    bool checkSorted(vector<int> &arr) {
        // code here.
        int swaps = 0 ;
        for(int i =0;i<arr.size();i++){
            
            
            //  main conditions
            if(arr[i] != i+1){
                
                swap(arr[i],arr[arr[i] -1 ]);
                swaps++;
                i--;
            }
        }
        return (swaps == 0 || swaps == 2);
    }
};