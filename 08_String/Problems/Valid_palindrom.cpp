#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
string removeEnn(string str){
       for(int i=0;i<str.size();i++){
              // check the character falls of the non - alphabete in ASCII range
        if(str[i] < 'A' || str[i] >'Z' &&  str[i] < 'a' || str[i] > 'z'){
            str.erase(i,1);
            i--;
        }
        // check the character falls of the capital alphabete in ASCII range
        // then change using capital_char - A + a;
        if(str[i] >='A' && str[i]<='Z'){
            str[i] = str[i] - 'A' + 'a';
        }
    }
    return str;
}
    bool isPalindrome(string s) {
        string ans = removeEnn(s);
        s=ans;
        cout<<ans<<endl;
        int i=0 ,j =s.size()-1;
        while(i<=j){
            if(s[i]==s[j]){
                swap(s[i],s[j]);
                i++;j--;
            }
            else{
                return 0;
            }
        }
        cout<<s<<endl;
        return (ans==s)?1:0;
    }
};
int main(){
    string s;
    getline(cin,s);
    cout<<s<<endl;
    Solution obj;
    cout<<obj.isPalindrome(s)<<endl;
return 0;
}