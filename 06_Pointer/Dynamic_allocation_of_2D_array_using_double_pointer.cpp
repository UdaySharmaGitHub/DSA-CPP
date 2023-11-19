#include<bits/stdc++.h>
using namespace std;
int main(){
    int r ,c;
    cin>>r>>c;   // row and columme 
    // Dyanimcally allocated the size
    int **arr = new int *[r];
// dynamically giving the col for each row
    for(int i=0;i<r;i++){
        arr[i] = new int[c];
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           cin>>arr[i][j]; 
        }
    }
    // printing the two array using the pointer
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    delete[] arr;
    return 0;
    }