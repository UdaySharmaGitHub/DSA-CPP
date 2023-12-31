/*
Basic Euclidean Algorithm for GCD: 
The algorithm is based on the below facts. 
=>  If we subtract a smaller number from a larger one (we reduce a larger number), 
    GCD doesn’t change. So if we keep subtracting repeatedly the larger of two, we end up with GCD.
=>  Now instead of subtraction, if we divide the smaller number, 
    the algorithm stops when we find the remainder 0.
*/
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(a==0)return b;
    if(b==0)return a;
    while(a!=b){
        if(a>b)
        {
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}
int main(){
    int a ,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
return 0;
}
