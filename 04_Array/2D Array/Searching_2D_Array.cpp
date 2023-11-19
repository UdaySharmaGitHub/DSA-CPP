/*
Searching in a matrix

Problem: We have to find if value x is present in the 2D array.
1. While traversing in the 2D matrix, just we have to put one if statement which
checks if(a[i][j] == x) , then x is present otherwise not.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
     cin>>m>>n;   // Size of the 2D array
    int arr[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
  }
     for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
    int x,flag=0;
    cin>>x;
// searching
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==x){
                cout<<i<<":"<<j<<endl;
                flag=1;
                break;
            }
        }
     }
     string ans = (flag==0)?"element Not found":"Element Found";
     cout<<ans<<endl;
     return 0;
  }