#include<bits/stdc++.h>
using namespace std;
class Solution{
 public:
   vector<vector<int>> PairSum(vector<int> &arr,int n,int sum){
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i] + arr[j]==sum){
                vector<int> temp;
               temp.push_back(min(arr[i],arr[j]));
               temp.push_back(max(arr[i],arr[j]));
               ans.push_back(temp);
            }
        }
    
    }
    sort(ans.begin(),ans.end());
    return ans;
   } 
};
int main(){
    int n;
    int t;
    cin>>t;
while (t--){
 cin>>n;
 vector<int> arr(n);
     for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    for(auto x:arr){
        cout<<x<<"\t";
    }
    cout<<endl;
    Solution s;
    int sum;
    cin>>sum;
    vector<vector<int>> vect = s.PairSum(arr,n,sum); // Creating a space for the 2d matrices
    for (int i = 0; i < vect.size(); i++) 
    { 
        for (int j = 0; j < vect[i].size(); j++) 
        { 
            cout << vect[i][j] << " "; 
        }     
        cout << endl; 
    } 
    //     for(auto x:s.LogicPairSum(arr,n,sum)){
    //     cout<<x<<"\t";
    // }
}
    return 0;
}