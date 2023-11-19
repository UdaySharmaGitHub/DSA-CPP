#include <bits/stdc++.h> 
vector<int> copyAndReverse(vector<int> arr, int n) {
	// Write your code here.
	int i =0 , j = n-1;
	while(i<=j){
		swap(arr[i++],arr[j--]);
	}
	return arr;
}	