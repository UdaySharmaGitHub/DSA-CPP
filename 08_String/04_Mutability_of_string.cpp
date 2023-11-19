#include<bits/stdc++.h>
using namespace std;
int main(){
 // mutability of string  string_name[index_number] = 'new_value'
 string str = "Hello World!";
 str[6]='J';
 cout<<endl<<"New String: "<<str;

 // using front() and back() function
 string mess = "this is string.";
 mess.front() = 'T'; // change the 0th index Character with 'T'
 mess.back() = '!';  // change the (n-1)th index Character with '!'
 cout << endl << "Modified String : " << mess;
}