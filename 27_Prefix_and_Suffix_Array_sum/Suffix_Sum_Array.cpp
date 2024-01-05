/*
=> Suffix Sum Array
=> Suffix Sum ArrayGiven an array arr[] of size N, the task is to compute and 
return its suffix sum array. 
=> Suffix Sum is a precomputation technique in which the sum of all the elements 
of the original array from an index i till the end of the array is computed.

=> Therefore, this suffix sum array will be created using the relation: 
Examples:
=>
Input: arr[] = { 15, 10, 25, 5, 10, 20 } , N = 6
Output: suffixSum[] = { 85, 70, 60, 35, 30, 20}
Explanation: While traversing the array from back, keep adding element from 
the back with element at current index.
suffixSum[5] = 20,  
suffixSum[4] =suffixSum[5] + arr[4] = 20+10 = 30 ,  
suffixSum[3] = suffixSum[4] + arr[3] = 30+5 = 35 and so on.
=>
Input: arr[] = {10, 14, 16, 20}, n = 6
Output: suffixSum[] = {60, 50, 36, 20}
Explanation: suffixSum[3] = 20,  
suffixSum[2] =suffixSum[3] + arr[2] = 20+16 = 36 ,  
suffixSum[1] = suffixSum[2] + arr[1] = 36+14 = 40 and so on.
Naive Approach:

=> The naive approach to solve the problem is to traverse each element 
of the array and for each element calculate the sum of remaining elements
to its right including itself using another loop. 
=> Algorithm:

   =>Initialize an empty result vector suffixSum of size N with all elements as 0.
   =>Traverse the array arr[] from left to right using a for loop.
   =>For each i-th element in arr[], initialize a variable sum to 0.
   =>Traverse the subarray arr[i:N] from i-th index to N-th index using another for loop.
   =>For each j-th element in the subarray arr[i:N], add the value of arr[j] to the variable sum.
   =>After the inner loop is completed, set the i-th index of suffixSum vector as the value of sum.
   =>Continue the outer loop until all elements of arr[] have been traversed.
   =>The suffixSum vector now contains the suffix sum array for the input array arr[].
   =>Return the suffixSum vector.
*/
// C++ code for the approach

#include<bits/stdc++.h>
using namespace std;
// Time Complexity: O(n*n) where n is size of input array. 
// This is because two nested loops are executing.
// Auxiliary Space: O(N), to store the suffix sum array.
// Driver's code
int main() {
	vector<int> arr = { 10, 14, 16, 20 };
	
	int n = arr.size();
		
	// initialize the suffix sum array with all elements as 0
	vector<int> suffixSum(n, 0);

	for(int i=0; i<n; i++) {
		// calculate the sum of remaining elements to the right
		for(int j=i; j<n; j++) {
			suffixSum[i] += arr[j]; 
		}
	}
	// Printing the computed suffix sum array
	cout << "Suffix sum array: ";
	for(int i=0; i<suffixSum.size(); i++) {
		cout << suffixSum[i] << " ";
	}
	
	return 0;
}

/*
Approach: To fill the suffix sum array, we run through index N-1 to 0 and keep on adding the current element 
with the previous value in the suffix sum array.
Create an array of size N to store the suffix sum.
Initialize the last element of the suffix sum array with the last element of the original array
suffixSum[n-1] = arr[n-1]
Traverse the original array from N-2 to 0
For each index i find the suffix sum and store it at suffixSum[i]
suffixSum[i] = suffixSum[i + 1] + arr[i]
Return the computed suffix sum array.
Below is the implementation of the above approach to create a suffix sum array:
*/

// C++ program for Implementing
// suffix sum array
#include <bits/stdc++.h>
using namespace std;
// Time Complexity: O(N), to traverse the original array for computing suffix sum.
// Auxiliary Space: O(N), to store the suffix sum array.
// Function to create suffix sum array
vector<int> createSuffixSum(vector<int> arr, int n)
{
	// Create an array to store the suffix sum
	vector<int> suffixSum(n, 0);

	// Initialize the last element of
	// suffix sum array with last element
	// of original array
	suffixSum[n - 1] = arr[n - 1];

	// Traverse the array from n-2 to 0
	for (int i = n - 2; i >= 0; i--)

		// Adding current element
		// with previous element from back
		suffixSum[i] = suffixSum[i + 1] + arr[i];

	// Return the computed suffixSum array
	return suffixSum;
}

// Driver Code
int main()
{
	vector<int> arr = { 10, 14, 16, 20 };
	int N = arr.size();

	// Function call to fill suffix sum array
	vector<int> suffixSum = createSuffixSum(arr, N);

	// Printing the computed suffix sum array
	cout << "Suffix sum array: ";
	for (int i = 0; i < N; i++)
		cout << suffixSum[i] << " ";
}
