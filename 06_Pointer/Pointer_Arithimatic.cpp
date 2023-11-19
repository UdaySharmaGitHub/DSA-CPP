#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 7 ;
    int *ptr = &a;
    cout<<ptr<<endl;
    cout<<++ptr<<endl;  // its increase by 4 byte
    cout<< --ptr <<endl; 
    return 0;
}