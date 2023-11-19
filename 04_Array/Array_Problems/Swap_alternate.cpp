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
void swapAlternate(int arr[],int n){
    for(int i=0;i<n-1;i+=2){
        swap(arr[i],arr[i+1]);
    }
}
int main(){
    int n;
     cin>>n;
    int arr[n];
    setarray(arr,n);
    getarray(arr,n);
    swapAlternate(arr,n);
    cout<<endl;
    getarray(arr,n);
    return 0;
}