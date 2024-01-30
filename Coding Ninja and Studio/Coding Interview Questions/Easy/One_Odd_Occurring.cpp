/*
 One Odd Occurring
Problem statement
Given an array ‘ARR’ of ‘N’ integers, where all the elements occur an even number of times and only one number occurs an odd number of times.



Find and return the number which occurs an odd number of times.



For example:
'N' = 5, 'ARR' = [1, 2, 3, 2, 3]
Output: 1

Except for number 1, all numbers occur an even number of times.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
9
4 5 6 5 6 9 9 4 4
Sample Output 1 :
4
Explanation Of Sample Input 1 :
5, 6, and 9 occur an even number of times, and only 4 occur odd number of times.
Sample Input 2 :
5
1 1 1 1 1
Sample Output 2 :
1
Constraints :
1 <= 'N' <= 10^5

1 <= 'ARR[i]' <= 10^5

Time Limit: 1 sec
*/
// Time Complexity O(n)
// Space Complexity O(n)
int missingNumber(int n, vector<int> &arr){
    // Write your code here.
    unordered_map<int,int> f;
    for(int x:arr){
        f[x]++;
    }
    for(auto i:f){
        if(i.second%2==1){
            return i.first;
        }
    }
    return 0;
}