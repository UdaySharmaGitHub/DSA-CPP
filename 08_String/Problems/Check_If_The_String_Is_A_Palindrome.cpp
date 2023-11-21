/*
Sample Input 1 :>
2
N2 i&nJA?a& jnI2n
A1b22Ba
Sample Output 1 :>
Yes
No
Explanation 1 :>
For the first test case, S = “N2 i&nJA?a& jnI2n”. If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “n2injaajni2n”, which is a palindrome. Hence, the given string is also a palindrome.

For the second test case, S = “A1b22Ba”. If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “a1b22ba”, which is not a palindrome. Hence, the given string is not a palindrome.
Sample Input 2 :>
3
codingninjassajNiNgNidoc
5?36@6?35
aaBBa@
Sample Output 2 :>
Yes
Yes
No
*/
#include <bits/stdc++.h> 
bool checkPalindrome(string s)
{
    int n=s.size(),i=0,j=n-1;
    while(i<j){
        // alnum gives the total number of alphabets and number present in the strintgn 
        while(!isalnum(s[i]) && i<n) i++;
        while(!isalnum(s[j]) && j>=0) j--;
        if(s[i]==toupper(s[i])) s[i]=tolower(s[i]);
        if(s[j]==toupper(s[j])) s[j]=tolower(s[j]);
        if(s[i]!=s[j]) return false;
        i++;
        j--;

    }
    return true;
}