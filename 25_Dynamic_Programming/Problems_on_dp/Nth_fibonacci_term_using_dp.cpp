#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n ){
        if(n==0){
                return 0;
        }
        else if(n==1 || n==2){
                return 1;
        }
        else{
                return (fibonacci(n-1)+fibonacci(n-2));
        }
}
int main()
{
        int n1;
        cin>>n1;
        cout<<fibonacci(n1)<<endl;
        int n;
        cin>>n;
        vector<int> dp(n+1,-1);
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {
                dp[i]=dp[i-1]+dp[i-2];
        }
        cout<<dp[n];
        return 0;
}