#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    int  i=0,j=n-1;
    while (i<j){
    while (arr[i]==0 && i<j)
    {
        i++;
    }
        while (arr[j]==1 && i<j)
    {
        j--;
    }
        if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;j--;
        }
       cout<<endl;
        for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    }
    cout<<endl;
        for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}