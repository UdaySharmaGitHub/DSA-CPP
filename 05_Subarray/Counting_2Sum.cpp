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
int counting2Sum(int a[],int n,int s){
    int count =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
       if(a[i]+a[j] == s){
        count++;
       }
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    setArray(a,n);
    getArray(a,n);
    cout<<endl;
    int s;
    cin>>s;
  cout<<counting2Sum(a,n,s)<<endl;
    return 0;
}