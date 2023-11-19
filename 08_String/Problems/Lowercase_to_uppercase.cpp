#include <bits/stdc++.h>
using namespace std;
string UppercasetoLowerCase(string str){
    for(int i=0;i<str.size();i++){
        // check the character falls of the capital alphabete in ASCII range
        // then change using capital_char - A + a;
        if(str[i] >='a' && str[i]<='z'){
            // str[i] = str[i] - 'a' + 'A';     //ny making the formula
            str[i] -=32;          // by the help of ASCII values
        }
    }
    return str;
}
int main(){
    string s;
    getline(cin,s);
    cout<<s<<endl;
    cout<<UppercasetoLowerCase(s)<<endl;
return 0;
}