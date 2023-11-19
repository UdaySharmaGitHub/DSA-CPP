#include<bits/stdc++.h>
using namespace std;
class Solution{
 public:
  // Method -1 to find Intersection elemnet in the array [Brute Force]
  vector<int> BruetefindIntersectionArray(vector<int> &arr1,int n ,vector<int> &arr2,int m){
    vector<int> ans;
   for(int i=0;i<n;i++){
    int element = arr1[i];
    for(int j=0;j<m;j++){
        if(element == arr2[j]){
ans.push_back(element);
arr2[j]= INT_MIN;
break;
        }
    }
    }
    return ans;
   }
//  Method -2 to find the Intersection elemnet in the array [Logic]
 vector<int> findIntersectionArray(vector<int> &arr1,int n ,vector<int> &arr2,int m){
    int i=0 ,j=0;
    vector<int> ans1;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
              ans1.push_back(arr1[i]);
             i++;
             j++;
        }
        else if(arr1[i] < arr2[j]){
           i++;
        }
        else{
          j++;
        }
    }
    return ans1;
  } 
};
int main(){
    int n,m,t;
    cin>>t;
while (t--){
     cin>>n;
    vector<int> arr1(n);
    for(int i=0;i<arr1.size();i++){
        cin>>arr1[i];
    }
    for(auto x:arr1){
        cout<<x<<"\t";
    }
    cout<<endl;
    Solution s;
         cin>>m;
    vector<int> arr2(m);
    for(int i=0;i<arr2.size();i++){
        cin>>arr2[i];
    }
    for(auto x:arr2){
        cout<<x<<"\t";
    }
    cout<<endl;
       for(auto x:s.BruetefindIntersectionArray(arr1,n,arr2,m)){
        cout<<x<<"\t";
    }
    cout<<endl;
    for(auto x:s.findIntersectionArray(arr1,n,arr2,m)){
        cout<<x<<"\t";
    }
}
    return 0;
}