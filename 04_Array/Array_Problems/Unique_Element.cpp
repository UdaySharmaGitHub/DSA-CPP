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
int uniqueElement(int *arr,int n){
   int ans=0;
  for(int i=0;i<n;i++){
    cout<<ans<<"\t";
     ans = ans^arr[i];
  }
  return ans;
  }
int main(){
    int n;
     cin>>n;
    int arr[n];
    setarray(arr,n);
    getarray(arr,n);
    cout<<uniqueElement(arr,n) ;
    return 0;
}