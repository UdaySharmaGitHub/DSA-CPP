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
void reverse(int arr[],int n){
    int s=0,en=n-1;
    while (s<=en){
         swap(arr[s],arr[en]);
        s++;en--;
    }
    
}
int main(){
    int n;
     cin>>n;
    int arr[n];
    setarray(arr,n);
    getarray(arr,n);
    reverse(arr,n);
    cout<<endl;
    getarray(arr,n);
    return 0;
}