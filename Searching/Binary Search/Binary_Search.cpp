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
int BinarySearch(int arr[],int n,int element){
    int st=0 , en = n-1;
    int mid =st + (en - st)/2; // optimized solution for large array
   while (st<=en){
    if(arr[mid] == element){
        return mid;
    }
    else if(arr[mid]<element){
        st = mid+1;
    }
    else{
        en = mid - 1 ;
    }
     mid =st + (en - st)/2;
   }
   return -1;
}
int main(){
    int n;
int t;
cin>>t;
while (t--)
{
     cin>>n;
    int arr[n];
    setarray(arr,n);
    getarray(arr,n);
    cout<<endl;
    int x;
    cin>>x;
    cout<<BinarySearch(arr,n,x)<<endl;
}

    return 0;
}