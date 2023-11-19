/*
Given an vector array arr of integers and a poistion 'M' you have to reverse the array after 
that position
*/
#include <bits/stdc++.h> 
using namespace std;
void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
	int i=m+1 , j = arr.size()-1;
	while(i<=j){
		swap(arr[i],arr[j]);
		i++;j--;
	}
}
int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
    vector<int> arr(n);
        for(int i=0;i<arr.size();i++){
            cin>>arr[i];
        }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int m;
    cin>>m;
    reverseArray(arr,m);
      for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    }
    return 0;
}