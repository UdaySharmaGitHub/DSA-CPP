#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;
// If the length of the string is ‘n’, then the total sub-strings will be n * (n + 1) /2.
// Time complexity: O( n^3 )
// Auxiliary Space: O(1)
void printSubstrings1(string str)
{
    int n = str.length();
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++) {
                cout << str[k];
            }
            cout<<endl;
        }
    }
}

// Time complexity: O(N2), where N is the length of the input string.
// Auxiliary Space: O(N), where N is the length of the input string.
void printSubstrings2(string input) {
    int n = input.length();
    string s;
    for (int i=0; i<n; i++) {
        s=input[i];
        cout << s << endl;
        for (int j=i+1;j<n;j++) {
            s = s + input[j];
            cout << s << endl;
        }
    }
}
// Time complexity: O(N2), where N is the length of the input string.
// Auxiliary Space: O(N), where N is the length of the input string.
void printSubstrings3(string input) {
    int n = input.length();
    string s;
    for (int i=0; i<n; i++) {
        s="";
        for (int j=1;j<=n-i;j++) {
             s= input.substr(i,j);
             cout<<s<<endl;
        }
    }
}


int main() {
    string input;
    getline(cin, input);
    printSubstrings1(input);
    printSubstrings2(input);
    printSubstrings3(input);
    return 0;
}