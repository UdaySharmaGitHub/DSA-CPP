/*
Given an array arr[] of size N, find the prefix sum of the array. A prefix sum array is another array prefixSum[] of the same size, 
such that the value of prefixSum[i] is arr[0] + arr[1] + arr[2] . . . arr[i].
Examples: 
Input: arr[] = {10, 20, 10, 5, 15}
Output: prefixSum[] = {10, 30, 40, 45, 60}
Explanation: While traversing the array, update the element by adding it with its previous element.
prefixSum[0] = 10, 
prefixSum[1] = prefixSum[0] + arr[1] = 30, 
prefixSum[2] = prefixSum[1] + arr[2] = 40 and so on.

Approach: To solve the problem follow the given steps:
=>Declare a new array prefixSum[] of the same size as the input array
=>Run a for loop to traverse the input array
=>For each index add the value of the current element and the previous 
value of the prefix sum array
*/
// C++ program for Implementing prefix sum array 
#include <bits/stdc++.h> 
using namespace std; 
// Fills prefix sum array 
// Time Complexity: O(N)
// Auxiliary Space: O(N)
void fillPrefixSum(int arr[], int n, int prefixSum[]) 
{ 
	prefixSum[0] = arr[0]; 
	// Adding present element with previous element 
	for (int i = 1; i < n; i++) 
		prefixSum[i] = prefixSum[i - 1] + arr[i]; 
} 
// Driver Code 
int main() 
{ 
	int arr[] = { 10, 4, 16, 20 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	int prefixSum[n]; 
	
	// Function call 
	fillPrefixSum(arr, n, prefixSum); 
	for (int i = 0; i < n; i++) 
		cout << prefixSum[i] << " "; 
} 

// This code is contributed by Aditya Kumar (adityakumar129)
