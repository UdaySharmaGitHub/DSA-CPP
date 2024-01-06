#include<bits/stdc++.h>
const int d = 100000007;
using namespace std;
int fibwithoutdp(int n){
    if(n==0)return 0;
    else if(n==1 || n==2) return 1;
    else return (fibwithoutdp(n-1)%d+fibwithoutdp(n-2)%d)%d;
}
int  fibwithdp(int n){
     vector<int> dp(n+1);
     dp[0]=0;
     dp[1]=1;
     for(int i=2;i<=n;i++){
        dp[i]=(dp[i-1]%d+dp[i-2]%d)%d;
     }
     return dp[n];
}
int main(){
int n;
cin>>n;
cout<<fibwithoutdp(n)<<endl;
cout<<fibwithdp(n)<<endl;
    return 0;
}