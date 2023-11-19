/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
// Brute Force O(n^2)
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
           for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                  return {i,j};
            }
           }
        }
    return {};
    }
    // Login_approach O(nlog(n));
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	// Write your code here. 
	vector<pair<int,int>> output ;
	sort(arr.begin(),arr.end());

      int i =0;
            int j = n - 1;
            while (i<j) {
				pair<int,int> p;
                int sum = arr[i] + arr[j];
                if (sum == target) {
                    p.first = arr[i];
					p.second = arr[j];
                    output.push_back(p);
                    i++;
                    j--;
                } else if (sum < target) {
                    i++;
                } else {
                    j--;
                }
            }
       if(!output.size()){
           output.push_back({-1,-1});
       }
       return output;
}


};
int main(){
    Solution s;
    int n;
    cin>>n;
  vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int target;
cin>>target;
for(auto x:s.twoSum(arr,target)){
    cout<<x<<" ";
}
return 0;
}