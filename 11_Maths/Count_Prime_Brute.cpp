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
    cin>>n;
    int count =0;
    for(int i=2;i<n;i++){
        if(isPrime(i)){ 
            cout<<i<<"\t"; 
            count++;
            }
    }
    cout<<"Total prime number btw 0 and "<<n<<" is "<<count<<endl;
}
