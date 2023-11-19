#include<bits/stdc++.h>
using namespace std;
void setArray(int a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void getArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}
void SumOfAllSubArray(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
    sum=0;
        for(int j=i;j<n;j++){
         sum+=a[j];
         cout<<"the sum from index "<<i<<":"<<j<<"is : "<<sum<<endl;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    setArray(a,n);
    getArray(a,n);
    cout<<endl;
  SumOfAllSubArray(a,n);
    return 0;
}