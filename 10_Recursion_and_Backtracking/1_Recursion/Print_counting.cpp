#include<bits/stdc++.h>
using namespace std;
// Counting in the decreasing Order
void deCounting(int n){
    if(n!=0){
        cout<<n<<endl;
        deCounting(n-1);
    }
}
// Counting in the Increasing Order
void inCounting(int n){
    if(n!=0){
        inCounting(n-1);
        cout<<n<<endl;
    }
}
int main(){
int n;
cin>>n;
inCounting(n);
    return 0;
}