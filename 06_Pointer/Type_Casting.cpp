/*
Typeid is an operator which is used where the dynamic type of an object needs to be known. 

typeid(x).name() returns the data type of x, for example, it returns ‘i’ for integers, ‘d’ for doubles, ‘f’ for float, ‘c’ for char , ‘Pi’ for the pointer to integer, ‘Pd’ for the pointer to double, ‘Pf’ for the pointer to float, ‘Pc’ for the pointer to char,’PPi’ for the pointer to pointer to integer. Single Pointer results in  prefix ‘P’ , double pointer results in ‘PP’ as prefix and so on. But the actual name returned is mostly compiler dependent. 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i =65 ;
    cout<<typeid(i).name()<<endl;  // i
    int *p =&i;
    cout<< typeid(p).name() <<endl;  // pi
    cout<< typeid(*p).name() <<endl;  // i
    char *pc = (char*)p;    
    cout<< typeid(pc).name() <<endl;  /// p
    cout<< typeid(*pc).name() <<endl;   //c

}