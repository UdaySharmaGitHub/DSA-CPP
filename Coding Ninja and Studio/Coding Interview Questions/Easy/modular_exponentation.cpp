/*
Sample Input 1 :
2 
3 1 2
4 3 10
Sample Output 1 :
1
4
Explanation for Sample Output 1:
In test case 1, 
X = 3, N = 1, and M = 2 
X ^ N = 3 ^ 1 = 3 
X ^ N % M = 3 % 2 = 1. 
So the answer will be 1.

In test case 2,
X = 4, N = 3, and M = 10 
X ^ N = 4 ^ 3 = 64 
X ^ N % M = 64 % 10 = 4. 
So the answer will be 4.
Sample Input 2 :
2
5 2 10 
2 5 4
Sample Output 2 :
5
0
Explanation for Sample Output 2:
In test case 1, 
X = 5, N = 2, and M = 10 
X^N = 5^2 = 25 
X^N %M = 25 % 10 = 5. 
So the answer will be 5.

In test case 2,
X = 2, N = 5, and M = 4 
X^N = 2^5 = 32 
X^N %M = 32 % 4 = 0. 
So the answer will be 0.
*/
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