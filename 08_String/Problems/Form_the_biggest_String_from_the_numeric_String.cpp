#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "653214789";
    // using the function sort(start,end,type)
    cout<<"string Before Sorting : "<<s<<endl;
    sort(s.begin(),s.end(),greater<int>());
    cout<<"string After Sorting in Decreasing Order: "<<s<<endl; //987654321
return 0;
}