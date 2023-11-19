#include <bits/stdc++.h>
//   time Complexity is O(nlog(n))
//    Space Complexity is O(n)
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	vector<int> ans;
	int i=0,j=0;
	while(i<m && j<n){
	 if(arr1[i]<arr2[j]){
		 ans.push_back(arr1[i++]);
	 }
	 else if(arr2[j]==0 || arr1[i]==0){
		 i++;j++;
	 }
	 else if(arr1[i]>arr2[j]){
		 		 ans.push_back(arr2[j++]);
	 }
	 else if(arr1[i]==arr2[j]){
        		 ans.push_back(arr2[j++]);
		 ans.push_back(arr1[i++]);
	 }
	}
	while(i<m){
		 		if(arr1[i]!=0){
					  ans.push_back(arr1[i++]);
				 }
	}
	while(j<n){
			if(arr2[j]!=0){
					  ans.push_back(arr2[j++]);
				 }
	}
	return ans;

}