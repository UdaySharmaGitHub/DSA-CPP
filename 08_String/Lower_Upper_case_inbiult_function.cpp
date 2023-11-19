#include<bits/stdc++.h>
using namespace  std;
int main(){

// Converting the string using the transform 
// transform(string_start_index,string_end_index , string_index_where_you_want_to_convert,::type);
    string lowerToupper ;
    getline(cin,lowerToupper);
    cout<<"Before Converting the Uppercase : "<<lowerToupper<<endl;
    transform(lowerToupper.begin(),lowerToupper.end() , lowerToupper.begin() , ::toupper);
    cout<<"After Converting the Uppercase : "<<lowerToupper<<endl;
    
     string upperTolower ;
    getline(cin,upperTolower);
    cout<<"Before Converting the Uppercase : "<<upperTolower<<endl;
    transform(upperTolower.begin(),upperTolower.end() , upperTolower.begin() , ::tolower);
    cout<<"After Converting the Uppercase : "<<upperTolower<<endl;
}