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
// gcd using the recursion
long long GCD(long long int a, long long int b) 
{ 
  if (b == 0) 
    return a; 
  return gcd(b, a % b); 
} 
  
// Function to return LCM of two numbers  
long long LCM(int a, int b) 
{ 
    return (a / gcd(a, b)) * b; 
} 
int LCM1(int a, int b) 
{ 
    int greater = max(a, b); 
    int smallest = min(a, b); 
    for (int i = greater; ; i += greater) { 
        if (i % smallest  == 0) 
            return i; 
    } 
} 
int GCD1(int a,int b){
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
    cout << " The GCD of " << a << " & " << b << " is: " <<gcd(a,b) << endl;
    cout << " The LCM of " << a << " & " << b << " is: " <<(a/gcd(a,b))*b << endl;
return 0;
}
