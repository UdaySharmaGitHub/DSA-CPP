#include <bits/stdc++.h> 
vector<int> Klargest(vector<int> &a, int k, int n) {
    // Write your code here
    vector<int> ans;
    sort(a.begin(),a.end());
     for(int i=k ; i>0;i--){
             ans.push_back(a[n-i]);
     }
     return ans;
}