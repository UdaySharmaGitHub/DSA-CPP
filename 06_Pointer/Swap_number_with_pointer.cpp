#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b=t;
}
void getPointerArray(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<" ";
    }
}
void reverseArray(int *arr,int n){
    for(int i=0;i<n/2;i++){
        swap(&arr[i],&arr[n-1-i]);
    }
}
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
  getPointerArray(arr,n);
  reverseArray(arr,n);
  getPointerArray(arr,n);

}