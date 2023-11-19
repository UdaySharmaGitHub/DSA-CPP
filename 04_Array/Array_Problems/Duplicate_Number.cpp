#include<bits/stdc++.h>
using namespace std;
void setarray(int arr[],int n){
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
}
void getarray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
// Brute Force //
int duplicateElement(int *arr,int n){
    int ans = 0;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
         ans =arr[j];
         break;
        }
    }
  }
  return ans;
  }
class Solution{
 public:
 // Method -2 to find the duplicate elemnet in the array [Logic]
 int duplicateElement(vector<int> &arr){
    int ans=0;
    // XOR all array element
    for(int i=0;i<arr.size();i++){
        ans = ans^arr[i];
    }
    for(int i=1;i<arr.size();i++){
        ans = ans^i;
        }
      return ans;
}
// Method -3 to find the duplicate elemnet in the array [Logic]
//    Sorting 
//   time Complexity = O(nlog(n)) and Space Complexity = O(1)
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0 ;i<nums.size();i++){
          if(nums[i]==nums[i+1]){
            return nums[i];
          }
        }
        return -1;
    }
};
  // Login //
int main(){
    int n;
     cin>>n;
    // int arr[n];
    // setarray(arr,n);
    // getarray(arr,n);
    // cout<<endl<<duplicateElement(arr,n) ;
    Solution s;
    vector<int> arr2(n);
    for(int i=0;i<arr2.size();i++){
        cin>>arr2[i];
    }
    for(auto x:arr2){
        cout<<x<<"\t";
    }
    cout<<s.duplicateElement(arr2)<<endl;
     cout<<s.findDuplicate(arr2)<<endl;
    return 0;
}