#include <bits/stdc++.h> 
string stringSum(string &num1, string &num2) {
    int carry = 0;
    string result = "";
    int i = num1.size() - 1;
    int j = num2.size() - 1;
    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        sum %= 10;
        result = to_string(sum) + result;

        i--;
        j--;
    }
    return result;
}