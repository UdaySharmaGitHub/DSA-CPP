#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;
//  O(nlog(n))
bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    string str1=input1 , str2 = input2;
    if(str2.size()!=str1.size()){
        return 0;
    }
    sort(str1.begin(),str1.end());
        sort(str2.begin(),str2.end());
   return str1.compare(str2);
}
//  Optimized Approach O(n)
bool isPermutation1(char input1[], char input2[]) {
    // Write your code here
    string str1=input1 , str2 = input2;
    if(str2.size()!=str1.size()){
        return 0;
    }
    int i=0 ,j=0;
    int count =0;
    while(i<str1.size()){
        if(str1[i]==str2[j]){
            i++;
            count++;
            j=0;
        }
        else{
            j++;   
        }
        if(j>=str1.size()){
                return false;
            }
    }
   if(count==str1.size()){
       return 1;
   }
   return 0;
}
// Most Optimized Approach
bool isPermutation2(char input1[], char input2[]) {
    // Write your code here
  int frequency[256];

    for (int i = 0; i < 256; ++i) {
        frequency[i] = 0;
    }

    for (int i = 0; input1[i] != '\0'; ++i) {
        ++frequency[input1[i]];
    }

    for (int i = 0; input2[i] != '\0'; ++i) {
        --frequency[input2[i]];
    }

    for (int i = 0; i < 256; ++i) {
        if (frequency[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}