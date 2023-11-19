#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    // Write your code here.
    // direct Approach O(nlong(n))
    // sort(nums.begin(),nums.end());
    // Optimized way O(n)
    int  i=0 , j= nums.size();
    int mid =0;
    while(mid<=j){
        if(nums[j]>=0){
                j--;
        }
        else if(nums[mid]<0){
            swap(nums[mid],nums[i]);
            i++;mid++;
        }
    }
    return nums;
}