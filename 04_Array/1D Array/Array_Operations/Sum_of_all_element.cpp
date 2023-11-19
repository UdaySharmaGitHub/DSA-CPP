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
int sumofArray(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
       sum+= arr[i];
    }
    return sum;
}
int main(){
    int n;
     cin>>n;
    int arr[n];
    setarray(arr,n);
    getarray(arr,n);
    cout<<endl<<"The sum of the array is : "<<sumofArray(arr,n)<<endl;
    return 0;
}