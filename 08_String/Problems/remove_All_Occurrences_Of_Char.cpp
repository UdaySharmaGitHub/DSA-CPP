/*
input:-
xxyyzxx
y

output:-
xxzxx
*/
#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;
string removeAllOccurrencesOfChar(string input, char c) {
    // Write your code here
    int n = input.size();
    for(int i=0;i<n;i++){
        if(input[i]==c){
            input.erase(i,1);
            i--;
        }
    }
    return input;
}

int main() {
    string input;
    char c;
    cin >> input >> c;
    string output = removeAllOccurrencesOfChar(input, c);
    cout << output << endl;
    return 0;
}