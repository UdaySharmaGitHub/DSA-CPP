#include<bits/stdc++.h>
using namespace std;
int Powerof2(int n){
    if(n==0)return 1;
    else return 2*Powerof2(n-1);
}
int main(){
int n;
cin>>n;
cout<<Powerof2(n)<<endl;
    return 0;
}