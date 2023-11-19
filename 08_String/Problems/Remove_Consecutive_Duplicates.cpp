#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;
// using erase() function in string
string removeConsecutiveDuplicates(string input)
{
    // Write your code here
    for(int i=0;i<input.size();i++){
        if(input[i]==input[i+1]){
            input.erase(i,1);
            i--;
        }
    }
    return input;
}

int main()
{
    string str;
    cin >> str;
    string ans = removeConsecutiveDuplicates(str);
    cout << ans << endl;
}