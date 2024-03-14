/*
Problem statement
You are given two arrays ‘A’ and ‘B’, each containing ‘N’ distinct integers. You are also given that ‘B’ is an anagram of ‘A’
Find the index mapping from array ‘A’ to array ‘B’, ie: for each element in ‘A’ you need to find the index in ‘B’ corresponding to that element.
An array ‘B’ is an anagram of an array ‘A’ means ‘B’ is made by randomizing the order of the elements in ‘A’.
For Example :
If ‘N’ = 5, ‘A’ = {10, 20, 30, 40, 50} and ‘B’ = {20, 10, 40, 50, 30}
Then we will print {1, 0, 4, 2, 3} because:
A[0] occurs at 1st index in array B, A[1] occurs at 0th index, A[2] occurs at 4th index, A[3] occurs at 2nd index, A[4] occurs at 3rd index.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 ≤ T ≤ 10      
1 ≤ N ≤ 10000
-10^9 ≤ A[i], B[i] ≤ 10^9
Time limit: 1 sec
*/
// Time Complexity O(n)
// Space Complexity O(n)
#include <bits/stdc++.h> 
vector<int> anagramMapping(int n, vector<int> a, vector<int> b) {
    // Write your code here.
    vector<int> ans;
    unordered_map<int,int> f;
    for(int i=0;i<n;i++){
        f[b[i]]=i;
    }
    for(int x:a){
        if(f.find(x)!=f.end()){
            ans.push_back(f[x]);
        }
    }
    return ans;
}
