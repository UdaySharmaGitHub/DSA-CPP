/*
70. Climbing Stairs
You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct 
ways can you climb to the top?
Example 1:
Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:
Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
Constraints:
1 <= n <= 45
*/
class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp = {0,1,2};
        if(n<dp.size()){return dp[n];}
    for(int i=3;i<=n;i++){
        dp.push_back( dp[i-1] + dp[i-2]);
    }
    return dp[dp.size()-1];
    }
};
class Solution {
public:
    int climbStairs(int n) {
        if(n==0 || n==1) return 1;
        vector<int> dp(n+1);
        dp[0]=1,dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};

class Solution {
public:
    int climbStairs(int n) {
        long long int prev1 = 1;
        long long int prev2 = 1;

        for(int i = 0; i < n; i++){
            long long int temp = prev1;
            prev1 = prev1 + prev2;
            prev2 = temp;

        }
        
        return prev2;
    }
};