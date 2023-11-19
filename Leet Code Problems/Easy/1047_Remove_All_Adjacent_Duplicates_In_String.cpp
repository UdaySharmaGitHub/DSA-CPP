#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeDuplicates(string s) {
         int n = s.size();
         int i = 0;
         while(i<n-1){
             if(s[i]==s[i+1]){
                 s.erase(i,2);
                 i-=2;
             }
                 i++;
         }
         cout<<i<<endl;
         
         return s;
    }
};
int main(){
    string s ;
    getline(cin,s);
    Solution obj;
    cout<<obj.removeDuplicates(s)<<endl;
}