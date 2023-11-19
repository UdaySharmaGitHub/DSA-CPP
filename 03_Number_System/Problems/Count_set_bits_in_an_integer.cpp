#include <bits/stdc++.h> 
#include <iostream>

using namespace std;
int countBits(int n){
   int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

    //Write your countBits function here

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}