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
void max1(int arr[],int n){
  int m=INT_MIN;
  for(int i=0;i<n;i++){
    m = max(m,arr[i]);
  }
  cout<<"the Maximum element of max1 :"<<m<<endl;
}
void max2(int arr[],int n){
  int m=INT_MIN;
  for(int i=0;i<n;i++){
    if(m<arr[i]){
        m=arr[i];
    }
  }
  cout<<"the Maximum element of max2 :"<<m<<endl;
}
int main(){
    int n;
     cin>>n;
    int arr[n];
    setarray(arr,n);
    getarray(arr,n);
    max1(arr,n);
    max2(arr,n);
    return 0;
}