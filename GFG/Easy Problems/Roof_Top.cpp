/*
Roof Top
You are given the heights of consecutive buildings. You can move from the roof of a building to the roof of the next adjacent building. You need to find the maximum number of consecutive steps you can put forward such that you gain an increase in altitude with each step.

Examples:

Input: arr[] = [1, 2, 2, 3, 2]
Output: 1
Explanation: 1, 2, or 2, 3 are the only consecutive buildings with increasing heights thus maximum number of consecutive steps with an increase in gain in altitude would be 1 in both cases.
Input: arr[] = [1, 2, 3, 4]
Output: 3
Explanation: 1 to 2 to 3 to 4 is the jump of length 3 to have a maximum number of buildings with increasing heights, so maximum steps with increasing altitude becomes 3.
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
1 <= arr.size() <= 106
1 <= arr[i] <= 105
*/

class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
        // Your code here
        int curr= 0 , maxa= 0;
        for(int i=0;i<arr.size()-1;i++){
            if( arr[i+1] > arr[i] ) curr++;
            else curr = 0;
            
            maxa = max(maxa,curr);
        }
        return maxa;
    }
};