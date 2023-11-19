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
void min1(int arr[],int n){
  int m=INT_MAX;
  for(int i=0;i<n;i++){
    m = min(m,arr[i]);
  }
  cout<<"the Minimum element of min1 :"<<m<<endl;
}
void min2(int arr[],int n){
  int m  = INT_MAX;
  for(int i=0;i<n;i++){
    if(m>arr[i]){
        m=arr[i];
    }
  }
  cout<<"the Minimum element of min2 :"<<m<<endl;
}
int main(){
    int n;
     cin>>n;
    int arr[n];
    setarray(arr,n);
    getarray(arr,n);
    min1(arr,n);
    min2(arr,n);
    return 0;
}