#include<bits/stdc++.h>
using namespace std;
int getPivot(int arr[],int n){
    int s =0;
    int en = n-1;
    int mid = s + (en -s)/2;
    while(s<en){
        if(arr[mid]>=arr[0]){
            s = mid+1;
        }
        else{
            en =mid ;
        }
        mid = s + (en -s)/2;
    }
    return s,en;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<getPivot(arr,n)<<endl;
}