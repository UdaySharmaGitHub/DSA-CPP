#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    int i=0,j=n-1;
    while(i<=j){
        if(arr[i]==arr[j]){
            cout<<i<<":"<<j<<"="<<arr[i]<<endl;;
            i++;j--;
        }
        else{
            cout<<"No Palindrome"<<endl;
            return 0;
        }
    }
    cout<<"Char Array is Palindrome"<<endl;
}