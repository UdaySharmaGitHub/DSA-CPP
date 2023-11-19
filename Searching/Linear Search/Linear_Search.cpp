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
int LinearSearch(int arr[],int n,int element){
    int flag =0;
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            flag=1;
            return i;
        }
    }
    if(flag==0){
        return -1;
    }
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
    cout<<LinearSearch(arr,n,x)<<endl;
}

    return 0;
}