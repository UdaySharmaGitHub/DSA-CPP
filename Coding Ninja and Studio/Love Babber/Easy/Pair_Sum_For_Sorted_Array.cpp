#include <bits/stdc++.h> 
int pairSum(vector<int> &arr, int n, int target){
	// Write your code here.
	int i=0,j=n-1,count=0;
	while(i<j){
		if((arr[i]+arr[j])==target){
		   i++;j--;
			count++;
		}
		else if((arr[i]+arr[j])>target){
			j--;
		}
		else{
			i++;
		}
	}
	return (count==0)?-1:count;
}