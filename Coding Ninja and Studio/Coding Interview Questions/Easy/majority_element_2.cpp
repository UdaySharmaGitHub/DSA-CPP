/*
Sample Input 1 :
2
7
3 2 2 1 5 2 3
5
7 4 4 9 7
Sample Output 1:
2
4 7
Explanation of Sample Input 1:
In the first test case, floor(N/3) = floor(7/3) is equal to 2, and 2 occurs 3 times which is strictly more than N/3. No other element occurs more than 2 times.

In the second test case, floor(N/3) = floor(5/3) is equal to 1, and 4 and 7 both occur 2 times. No other element occurs more than once.
Sample Input 2:
2
6
1 2 4 4 3 4
4
6 6 6 7
Sample Output 2:
4
6
Explanation of Sample Input 2:
In the first test case, floor(N/3) = floor(6/3) is equal to 2, and 4 occurs 3 times which is strictly more than N/3. No other element occurs more than 2 times.

In the second test case, floor(N/3) = floor(4/3) is equal to 1, and 6 occurs 3 times. No other element occurs more than once.
*/
#include <bits/stdc++.h>
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int maxa = -9999;
    for(int i =0;i<arr.size();i++){
        maxa = max(maxa,arr[i]);
    }
    vector<int> ans(maxa+1,0);
    for(int i =0 ;i<arr.size();i++){
        ans[arr[i]]++;
    }
    vector<int> ans2;
    for(int i=0;i<ans.size();i++){
        if(ans[i]>arr.size()/3){
              ans2..push
        }
    }

}