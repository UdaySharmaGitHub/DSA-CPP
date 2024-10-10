/*
Longest Prefix Suffix
Given a string of characters, find the length of the longest proper prefix which is also a proper suffix.

NOTE: Prefix and suffix can be overlapping but they should not be equal to the entire string.

Examples :

Input: str = "abab"
Output: 2
Explanation: "ab" is the longest proper prefix and suffix. 
Input: str = "aaaa"
Output: 3
Explanation: "aaa" is the longest proper prefix and suffix. 
Expected Time Complexity: O(|str|)
Expected Auxiliary Space: O(|str|)

Constraints:
1 ≤ |str| ≤ 106
str contains lower case English alphabets
*/

// User function template for C++

class Solution {
  public:
    int lps(string str) {
        // Your code goes here
        int p =0 ,s = 1,count = 0, pos =1 , n =str.size();
        while(p<n && s<n){
            if(str[p] == str[s]){
                count++;
                p++;s++;
            }
            else{
                count = 0 ; pos++;s=pos;p=0;
            }
        }
        return count ;
    }
};