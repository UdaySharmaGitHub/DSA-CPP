#include <bits/stdc++.h>

int magicIndex(vector<int> a, int n) {

for(auto i: a){

if(a[i]==i){

return a[i];

}

}

return -1;

}