/*
Find similarities between two arrays.
Problem statement
Send feedback
You have been given two arrays/list 'ARR1' and 'ARR2' consisting of 'N' and 'M' integers respectively. Your task is to return the number of elements common to 'ARR1' and 'ARR2' and the number of elements in the union of 'ARR1' and 'ARR2'.
Example:
Let's assume 'ARR1' is [1,2,3,4,5] and 'ARR2' is [2,4,6,8]. Elements common to 'ARR1' and 'ARR2' are [2,4] as they occur in both 'ARR1' and 'ARR2'. Therefore the number of elements common to 'ARR1' and 'ARR2' is 2. Union of 'ARR1' and 'ARR2' is [1,2,3,4,5,6,8]. Therefore the number of distinct elements in the union of 'ARR1' and 'ARR2' is 7. So, the answer will be 2 7.
Note:
1. 'ARR1' consists of distinct integers i.e no number occurs twice in array/list.
2. 'ARR2' consists of distinct integers i.e no number occurs twice in array/list.
Detailed explanation (Input/output format, Notes, Images)
Constraints:
1 <= T <= 10
1 <= N <= 1000
1 <= M <= 1000
1 <= 'arr1[i]' <= 10^5
1 <= 'arr2[i]' <= 10^5

Sample Input 1:
2
2 2
1 2
3 4  
2 1
2 3
3
Sample Output 1:
0 4
1 2
Sample Output 1 Explanation:
Test case 1:

‘ARR1’ is [1,2]
‘ARR2’ is [3,4] 
Elements common to ‘ARR1’ and ‘ARR2’ are []. Therefore the number of elements common to ‘arr’ and ‘brr’ is 0. 
The union of ‘ARR1’ and ‘ARR2’ is [1,2,3,4]. Therefore the number of distinct elements in the union of ‘ARR1’ and ‘ARR2’ is 4.

Therefore the answer is 0 4.

Test case 2:

‘ARR1’ is [2,3].
‘ARR2’ is [3] 
Elements common to ‘ARR1’ and ‘ARR2’ are [3]. Therefore the number of elements common to ‘ARR1’ and ‘ARR2’ is 1. 
The union of ‘ARR1’ and ‘ARR2’ is [2,3]. Therefore the number of distinct elements in the union of ‘ARR1’ and ‘ARR2’ is 2.

Therefore the answer is 1 2.
Sample Input 2:
2
5 3
1 2 3 4 5
4 6 2
1 2
1
3 2
Sample Output 2:
2 6
0 3
*/
#include <bits/stdc++.h> 
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
	// Write Your Code here.  
	set<int> s;
	for(int i=0;i<n;i++){
         s.insert(arr1[i]);
	}
	for(int i=0;i<m;i++){
         s.insert(arr2[i]);
	}            
	int b = s.size();
	unordered_map<int,int> f;
	for(auto i:arr1){
		f[i]++;
	}
	for(auto i:arr2){
		f[i]++;
	}
	int a=0;
    for(auto i:f){
		if(i.second>1){
			a++;
		}
	}
	return {a,b};
}