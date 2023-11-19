#include <bits/stdc++.h> 
long long int sumOrProduct(long long int n, long long int q)
{
	// Write your code here.
	long long int ans = 0;
	if(q==1){
		ans = (n*(n+1))/2;
		return ans;
	}
	else if(q==2){
		ans =1;
			for(long long int i=2;i<=n;i++){
			ans*=i;
			ans%=1000000007;
		}
	}
	return ans;
}