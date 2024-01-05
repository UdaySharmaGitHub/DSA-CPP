/*
Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not. Two arrays are said to be equal if both of them contain same set of elements, arrangements (or permutation) of elements may be different though.
Note : If there are repetitions, then counts of repeated elements must also be same for two array to be equal.

Example 1:

Input:
N = 5
A[] = {1,2,5,4,0}
B[] = {2,4,5,0,1}
Output: 1
Explanation: Both the array can be 
rearranged to {0,1,2,4,5}
Example 2:

Input:
N = 3
A[] = {1,2,5}
B[] = {2,4,15}
Output: 0
Explanation: A[] and B[] have only 
one common value.
Your Task:
Complete check() function which takes both the given array and their size as function arguments and returns true if the arrays are equal else returns false.The 0 and 1 printing is done by the driver code.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(N)

Constraints:
1<=N<=107
1<=A[],B[]<=1018
*/
//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
// Time Complexity O(n)
// Space Complexity O(n)
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
unordered_map<ll,ll>umap;
for(int i = 0 ; i<N ;i++){
         umap[A[i]]++;
}
for(int i = 0 ;i<N;i++){
    if(umap.find(B[i])==umap.end()){
      return false;
    }
    if(umap[B[i]]==0){
        return false;
    }
    umap[B[i]]--;
}
return true;
    }
// Time Complexity O(n*log(n))
// Space Complexity O(n)
bool areEqual(int arr1[], int arr2[], int N, int M)
{
    // If lengths of array are not equal means
    // array are not equal
    if (N != M)
        return false;
 
    // Sort both arrays
    sort(arr1, arr1 + N);
    sort(arr2, arr2 + M);
 
    // Linearly compare elements
    for (int i = 0; i < N; i++)
        if (arr1[i] != arr2[i])
            return false;
 
    // If all elements were same.
    return true;
}
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<ll> arr(n,0),brr(n,0);
        
        // increase the count of elements in first array
        for(ll i=0;i<n;i++)
            cin >> arr[i];
        
        
        // iterate through another array
        // and decrement the count of elements
        // in the map in which frequency of elements
        // is stored for first array
        for(ll i=0;i<n;i++)
            cin >> brr[i];
        Solution ob;
        cout << ob.check(arr,brr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends