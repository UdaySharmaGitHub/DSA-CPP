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
bool RecuresiveLinearSearch(int arr[], int n, int x)
{
    getarray(arr,n);
  if(arr[0]==x){return 1;}
  if(n==0){return 0;}
  else{
    bool res = RecuresiveLinearSearch(arr+1,n-1,x);
    return res;
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
 bool result = RecuresiveLinearSearch(arr, n , x);
    (result == 0)? cout << "Element is not present in array":cout << "Element is present";
}
    return 0;
}