#include<bits/stdc++.h>
using namespace std;
void setarray(int arr[],int n){
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
}
void getarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
void deleteArray(int arr[],int n,int index){
 for(int i=index;i<n;i++){
     arr[i] = arr[i+1];
 }
 n--;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int n;
     cin>>n;
    int arr[n];
    setarray(arr,n);
    getarray(arr,n);
    int index;
    cout<<endl<<"Enter the index where you want to delete the element :";
    cin>>index;
    deleteArray(arr,n,index);
}