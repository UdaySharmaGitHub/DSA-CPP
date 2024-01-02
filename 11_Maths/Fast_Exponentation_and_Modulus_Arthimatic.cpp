//      Modulus Arthmatic
//      (a+b)%m = a%m + b%m
//      a%m - b%m = (a-b)%m
//      a%m * b%m = (a*b)%m

// Fast Exponention
//         |-- (a^(b/2))^2 , when b is even
//   a^b==| 
//        |--  ((a^(b/2))^2) * a , when b is odd

#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	int res = 1;
	while(n>0){
		if(n&1){
			res= (1ll*(res)*(x%m))%m;
		}
		x=(1ll*(x)%m*(x%m))%m;
		n=n>>1;	
	}
	return res;
}