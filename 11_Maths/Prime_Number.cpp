#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<2)return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return 0;
    }
    return 1;
}
int main(){
    int n;
    int t ;
    cout<<"Enter the number of test case: ";
    cin>>t;
while(t--){
    cout<<"Enter the number to check weather is Prime or not : "<<endl;
     cin>>n;
     string res = (isPrime(n))?"Number is Prime":"Number is not Prime";
cout<<res<<endl;    
}
return 0;
}
