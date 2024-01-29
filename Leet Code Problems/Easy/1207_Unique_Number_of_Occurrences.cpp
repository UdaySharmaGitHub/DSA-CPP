/*
1207. Unique Number of Occurrences
Given an array of integers arr, return true if the number of occurrences 
of each value in the array is unique or false otherwise.
Example 1:
Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values 
have the same number of occurrences.
Example 2:
Input: arr = [1,2]
Output: false
Example 3:
Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
Constraints:
1 <= arr.length <= 1000
-1000 <= arr[i] <= 1000
*/
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<int> v;

        for (int i = 0; i < arr.size(); i++) {
            int cnt = 1;

            // Count occurrences of the current element
            while (i + 1 < arr.size() && arr[i] == arr[i + 1]) {
                cnt++;
                i++;
            }

            v.push_back(cnt);
        }

        sort(v.begin(), v.end());

        for (int i = 1; i < v.size(); i++) {
            if (v[i] == v[i - 1]) {
                return false;
            }
        }

        return true;
    }
}; 