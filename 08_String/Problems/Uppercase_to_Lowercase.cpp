#include <bits/stdc++.h>
using namespace std;
string UppercasetoLowerCase(string str){
    for(int i=0;i<str.size();i++){
        // check the character falls of the capital alphabete in ASCII range
        // then change using capital_char - A + a;
        if(str[i] >='A' && str[i]<='Z'){
            // str[i] = str[i] - 'A' + 'a';  // by making formula
            str[i] +=32;      //using the help of ASCII value
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