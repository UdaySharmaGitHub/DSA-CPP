#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 7 ;
    int *ptr = &a;
    cout<<ptr<<endl; // print the address of the pointer p
    cout<<++ptr<<endl;  // its increase by 4 byte
    cout<< --ptr <<endl;  // its decrease by 4 byte
    cout<< --ptr <<endl;  // its decrease by 4 byte
    return 0;
}