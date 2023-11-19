#include<bits/stdc++.h>
using namespace std;
void getArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void getPointerArray(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<" ";
    }
}
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
  getArray(arr,n);
  getPointerArray(arr,n);

}