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
void InsertArray(int arr[],int n,int index,int element){
    n++;
 for(int i=n;i>=index;i--){
     arr[i] = arr[i-1];
 }
 arr[index]=element;
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
    cout<<endl<<"Enter the index where you want to insert the element :";
    cin>>index;
    int element;
    cout<<endl<<"Enter the element you want to insert in the array : ";
    cin>>element;
    InsertArray(arr,n,index,element);
}