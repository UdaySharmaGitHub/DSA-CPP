#include<bits/stdc++.h>
using namespace std;
int main(){
    int r ,c;
    cin>>r>>c;   // row and columme 
    int *arr = new int[r*c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           cin>>*(arr+i+j); // inputing the *(arr+i+j) === arr[i+j]
        }
    }
    // printing the two array using the pointer
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           cout<<*(arr+i+j)<<" ";
        }
        cout<<endl;
    }
    return 0;
    }