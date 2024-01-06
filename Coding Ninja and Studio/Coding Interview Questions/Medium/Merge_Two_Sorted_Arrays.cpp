/*
Sample Input 1:
2
3 2
1 2 3 0 0 
4 5
4 2
1 4 6 10 0 0
2 5
Sample Output 1:
1 2 3 4 5
1 2 4 5 6 10
Explanation for Sample Output 1:
For sample test case 1: 
In this test case, After merging ‘ARR2’ into ‘ARR1’. 
‘ARR1’ = [1 2 3 4 5]

For sample test case 2: 
In this test case, After merging ‘ARR2’ into ‘ARR1’. 
‘ARR1’ = [1 2 4 5 6 10] 
Sample Input 2:
2
2 3
1 10 0 0 0 
3 8 11
3 3
3 4 6 0 0 0
1 8 10
Sample Output 2:
1 3 8 10 11
1 3 4 6 8 10 
Explanation for Sample Output 2:
For sample test case 1: 
In this test case, After merging ‘ARR2’ into ‘ARR1’. 
‘ARR1’ = [1 3 8 10 11]

For sample test case 2: 
In this test case, After merging ‘ARR2’ into ‘ARR1’. 
‘ARR1’ = [1 3 4 6 8 10]
*/
#include <bits/stdc++.h>
// Approach-1 
// merge the array one array into another then sort and remove zeros
// Time Complexity O(n*log(n))
// Space complexity O(n+m)

// Approach-2 
// Time Complexity O(n+m)
// Space complexity O(n+m)
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