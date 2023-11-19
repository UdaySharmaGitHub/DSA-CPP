#include <bits/stdc++.h>
using namespace std;
string removeSpecialCharacter(string str){
    for(int i=0;i<str.size();i++){
        // check the character falls of the non - alphabete in ASCII range
        if(str[i] < 'A' || str[i] >'Z' &&  str[i] < 'a' || str[i] > 'z'){
            str.erase(i,1);
            i--;
        }
    }
    return str;
}
int main(){
    string s;
    getline(cin,s);
    cout<<s<<endl;
    cout<<removeSpecialCharacter(s)<<endl;
return 0;
}