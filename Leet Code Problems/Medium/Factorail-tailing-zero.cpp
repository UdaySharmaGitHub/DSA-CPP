#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
long long fact(long long n ){
    return (n==0 || n==1)? 1: n*fact(n-1);
}
    // int trailingZeroes(int n) {
    //     return (fact(n)%10==0)? 1:0;
    // }
    //     int trailingZeroes(int n) {
    //     int counter = 0;
    //       if(fact(n)%10==0){
    //  while(n>0){
    //         counter++;
    //         n/=10;
    //         trailingZeroes(n);
    //     }
    //  }
    //  return counter;
    // }
           int trailingZeroes(int n) {
 int counter =0 ;
 while(n>0){
     counter +=n/5;
     n/=5;
 }
     return counter;
    }
};
int main(){
    Solution s;
    int t;
    int n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        cout<<s.trailingZeroes(n)<<endl;
    }
    
}