/*
 Single Element in a Sorted Array
 Sample Input 1 :
5 
1 1 3 5 5 


Sample Output 1 :
3 


Explanation of Sample Input 1 :
Given array is [1, 1, 3, 5, 5]    
Here, 3 occurs once in the array. So, the answer is 3.


Sample Input 2 :
5
1 1 4 4 15


Sample Output 2 :
15


Explanation of Sample Input 2 :
The array is [1, 1, 4, 4, 15].    
Here, 15 occurs once in the array. So, the answer is 15.


Expected Time Complexity:
Try to solve this in O(log(n)).


Constraints :
1 <= n <= 10^5
0 <= arr[i] <= 10^9
*/
// Time Complexity O(n)
int singleNonDuplicate1(vector<int>& arr)
{
	// Write your code here
	unordered_map<int,int> f;
	for(int x:arr){
		f[x]++;
	}
	for(auto i:f){
		if(i.second==1){
			return i.first;
		}
	}
	return 0;
}
// Time Complexity O(long(n))
int singleNonDuplicate(vector<int>& arr){
	int ans = 0 ;
	if(arr.size()==1){
		return arr[0];
	}
	int i=0;
	while(i<arr.size()){
		if(arr[i]==arr[i+1]){
			i++;
		}
		else{
			ans=arr[i];
		}
		i++;
	}
	return ans;
}