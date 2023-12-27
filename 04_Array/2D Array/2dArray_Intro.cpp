#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
     cin>>m>>n;   // Size of the 2D array
    int arr[m][n];
  // Taking input row-wise
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
  }
//  printing the 2D matrices
     for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
cin>>m>>n;   // Size of the 2D array
    int arr2[m][n];  
  // Taking input Column-wise
  for(int j=0;j<n;j++){
    for(int i=0;i<m;i++){
        cin>>arr2[i][j];
    }
  }
//  printing the 2D matrices
     for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr2[i][j]<<" ";
    }
    cout<<endl;
  }
    return 0;
}