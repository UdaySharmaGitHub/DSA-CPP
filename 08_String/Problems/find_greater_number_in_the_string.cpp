#include<bits/stdc++.h>
using namespace  std;
int main(){
  // Soritng sort(string_start_index,end_index,greater<int>() || null )
    string greaterNumber ;
    getline(cin,greaterNumber);
    cout<<"Before Sorting : "<<greaterNumber<<endl;
    sort(greaterNumber.begin(),greaterNumber.end(),greater<int>());
    cout<<"After Sorting : "<<greaterNumber<<endl;
    cout<<"Largest Number :"<<greaterNumber[0]<<endl;
    cout<<"Smallest Number :"<<greaterNumber[greaterNumber.size()-1]<<endl;
  
}