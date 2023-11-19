#include <bits/stdc++.h> 
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
string reverseEachWord(string input)
{
    string s = "";
    string ans;
    for(int i = 0; i <= input.length()+1; i++){
        if (input[i] != '\0' && input[i] != ' '){
            s.push_back(input[i]);
        }
        else{
            for(int j = s.length()-1; j >= 0; j--){
                ans.push_back(s[j]);
            }
                ans.push_back(' ');
                s.clear();
        }
    } 
    return ans;
}
int main()
{
    string str;
    getline(cin, str);
    string ans = reverseEachWord(str);
    cout << ans << endl;
    ;
}