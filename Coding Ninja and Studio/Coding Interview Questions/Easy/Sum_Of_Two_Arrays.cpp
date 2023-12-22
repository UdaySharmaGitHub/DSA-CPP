/*
Sample Input 1:
2
4 1 
1 2 3 4
6
3 2
1 2 3
9 9    
Sample Output 1:
1 2 4 0
2 2 2
Explanation For Sample Input 1:
For the first test case, the integer represented by the first array is 1234 and the second array is 6, so the sum is 1234 + 6 =  1240.

For the second test case, the integer represented by the first array is 123 and the second array is 99, so the sum is 123 + 99 = 222.
Sample Input 2:
2
3 3 
4 5 1
3 4 5
2 2
1 1
1 2
Sample Output 2:
7 9 6
2 3
*/
#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int i = n-1 , j = m-1;
	int carry = 0;
	vector<int> ans;
	while(i>=0 && j>=0){
          int sum = a[i] + b[j] +carry;
		  carry=sum/10;
		  sum%=10;
		  ans.push_back(sum);
		  i--;j--;
	}
	// when 1st Array is Greaeter than the 2nd
	while(i>=0){
		int sum = a[i]+carry;
		carry=sum/10;
		  sum%=10;
		  ans.push_back(sum);
		  i--;
	}
		// when 2nd Array is Greaeter than the 1st
		while(j>=0){
		int sum = b[j]+carry;
		carry=sum/10;
		  sum%=10;
		  ans.push_back(sum);
		  j--;
	}
	// check if any carry is left or not
	while(carry!=0){
		int sum = carry;
		carry=sum/10;
		sum%=10;
    	ans.push_back(sum);
	}
	reverse(ans.begin(),ans.end());
	return ans;
}