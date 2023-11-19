#include<bits/stdc++.h>
using namespace std;
int main(){
    //--------------------------------- 1 -------------------------------------//
    //By Creating a Character array;
    char str[6] = {'H','e','l','l','o','\0'};
    cout<<str<<endl;
    // or
    char  str1[] = "Hello";
    cout<<str1<<endl;

    //--------------------------------- 2 -------------------------------------//
  char initcharArr[5] = {'A','b','d','e','\0'};
    cout<<initcharArr<<endl;  // this print it as the String 
    for(char x:initcharArr){ // You can print this in a array from using the for loop 
        cout<<x<<" ";
    }
    cout<<endl;

    char name12[100] ="UdaySharma";
    int i=0;
    while(name12[i]!='\0'){
        cout<<name12[i]<<" ";
        i++;
    }
    cout<<endl;
    char chararr[100];
    cin>>chararr;
    cout<<chararr<<":"<<chararr[3]<<":"<<chararr[2]<<":"<<chararr[5];

    //--------------------------------- 3 -------------------------------------//
    char name[50]; // decalaring the object 
    cout<<"Enter the Name : ";  // Uday Sharma
    cin>>name;  // do take input after the space 
    cout<<"Entered name : "<<name<<endl;  // Uday

    //--------------------------------- 4 -------------------------------------//
    // for eliminate this problem we use get() 
    // in case of char array ans getline() in case of string
    char name2[50]; 
     cout<<"Enter the Name : ";  // Uday Sharma
    cin.get(name2,50);  // 
    cout<<"Entered name : "<<name2<<endl;  // Uday Sharma
}