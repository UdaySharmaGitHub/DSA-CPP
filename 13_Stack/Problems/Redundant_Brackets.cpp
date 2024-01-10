#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<int> st;
    for(char &ch:s){
        if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            st.push(ch);
        }
        else{
            if(ch==')' ){
               if(st.top()=='('){
                   return 1;
               }
               while(st.top()!='('){
                   st.pop();
               }
               st.pop();
            }
        }
    }
    return 0;
}
