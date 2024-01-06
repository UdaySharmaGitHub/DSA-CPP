/*
Sample Input 1 :
2
2
3
Sample Output 1 :
2
3
Explanation Of Sample Input 1 :
In the first test case, there are only two ways to climb the stairs, i.e. {1,1} and {2}.

In the second test case, there are three ways to climb the stairs i.e. {1,1,1} , {1,2} and {2,1}.
Sample Input 2 :
2
4
5
Sample Output 2 :
5
8
Explanation Of Sample Input 2 :
In the first test case, there are five ways to climb the stairs i.e. 
{1,1,1,1} , {1,1,2} , {2,1,1} , {1,2,1} , {2,2}.
In the second test case, there are eight ways to climb the stairs i.e. 
{1,1,1,1,1} , {1,1,1,2} , {1,1,2,1}, {1,2,1,1}, {2,1,1},{2,2,1},{2,1,2} and {2,2,1}.
*/
#include <bits/stdc++.h> 
const int d = 1000000007;
int countDistinctWays(int nStairs) {
    //  Write your code here.
    vector<long long int> dp(nStairs+1);
    dp[0]=1;dp[1]=1;
    for(int i=2;i<=nStairs;i++){
        dp[i] = dp[i-1]+dp[i-2];
        dp[i]%=d;
    }
    return dp[nStairs];
}