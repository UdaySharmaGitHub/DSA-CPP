#include<bits/stdc++.h>
using namespace std;
int main(){
    //--------------------------------- 1 -------------------------------------//
 string name = "Uday Sharma";
 cout<<name<<endl;

//  //------------------------------- 2 -----------------------------------//
//  // not read after the space because it take space as null character
// string inpname ;
// cin>>inpname;   //Uday Sharma
// cout<<inpname<<endl; //Uday 

//--------------------------- 3 --------------------------------------//
 // using the getline() function to read a line
 string inpNameSpace ;
 getline(cin,inpNameSpace);
 cout<<inpNameSpace;
}