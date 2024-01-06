#include<bits/stdc++.h>
const int d = 100000007;
using namespace std;
int climbStairswithoutdp(int n){
    if(n<0)return 0;
    else if(n==0) return 1;
    else return (climbStairswithoutdp(n-1)%d+climbStairswithoutdp(n-2)%d)%d;
}
int climbStairswithdp(int n) {
        if(n==0 || n==1) return 1;
        vector<int> dp(n+1);
        dp[0]=1,dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
int main(){
int n;
cin>>n;
cout<<climbStairswithoutdp(n)<<endl;
cout<<climbStairswithdp(n)<<endl;
    return 0;
}