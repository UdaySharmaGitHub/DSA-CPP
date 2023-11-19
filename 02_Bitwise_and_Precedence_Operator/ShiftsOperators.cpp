#include<iostream>
using namespace std;
int main(){
    int a=7; // 7 in binary = 111
    // cin>>a;
    cout<<"Right Shift a>>1: "<<(a>>1)<<endl;   //shift right a   // 111 -> 011    // 3
    cout<<"Right Shift a>>2: "<<(a>>2)<<endl;   //shift right a   // 111 -> 001    // 1
    cout<<"Right Shift a>>3: "<<(a>>3)<<endl;   //shift right a   // 111 -> 000    // 0
    cout<<"left Shift a<<1: "<<(a<<1)<<endl;   //left right a     // 111 -> 1110   // 14
    cout<<"left  Shift a<<2: "<<(a<<2)<<endl;   //left  right a    // 111 -> 11110  // 28


}