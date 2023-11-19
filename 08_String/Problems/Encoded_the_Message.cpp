/*
Sample Input 1 :
3
aabbc
abcd
abbdcaas
Sample Output 1 :
a2b2c1
a1b1c1d1
a1b2d1c1a2s1
Explaination for Sample Input 1:
Test Case 1: As 2 consecutive 'a', 2 consecutive 'b', and 1 'c' are present in the given string so output is "a2b2c1".

Test Case 2: As 1 consecutive 'a', 1 consecutive 'b', 1 consecutive 'c' and 1 consecutive 'd' are present in the given string so output is "a1b1c1d1".

Test Case 3: As 1 consecutive 'a', 2 consecutive 'b', 1 consecutive 'd', 1consecutive 'c', 2 consecutive 'a' and 1 consecutive 's' are present in the given string so output is "a1b2d1c1a2s1".
Sample Input 2:
2
sadasd
adsad
Sample Output 2:
s1a1d1a1s1d1
a1d1s1a1d1
*/
#include <bits/stdc++.h> 
string encode(string &message)
{
     int n= message.size();
    string str;
   int count=1;
    for(int i=0;i<n;i++){
        
        if(message[i]==message[i+1]){
            count+=1;
            continue;
        }
        str+=message[i];
        str+=to_string(count);
        count=1;
}
return str ; 
}