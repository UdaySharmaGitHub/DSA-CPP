/*
Redundant Brackets
Sample Input 1 :
2
(a+b)
(a+c*b)+(c))
Sample Output 1 :
No
Yes
Explanation of Sample Input 1 :
In the first test case, there are no redundant brackets. Hence, the output is “No”. 


In the second test case, the brackets around the alphabet ‘c’( index 8 and index 10) are redundant. Hence the output is “Yes”.
Sample Input 2 :
2
(a*b+(c/d))
((a/b))
Sample Output 2 :
No
Yes
Explanation of Sample Input 2 :
In the first test case, there are no redundant brackets. Hence, the output is “No”. 


In the second test case, the brackets around the subexpression “(a+b)” ( index 0 and index 6) are redundant. Hence the output is “Yes”
*/
#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char> st;
    for(char &ch:s){
        if(ch=='(' || (ch=='+' || ch=='-' || ch=='*'
         || ch=='/')){
            st.push(ch);
        }
        else{
            if(ch==')'){
                bool isRedundant = true;
                while(st.top()!='('){
                    char topChar = st.top();
                    if(topChar=='+' || topChar=='-' || topChar=='*'
         || topChar=='/'){
                    isRedundant=0;
         }
         st.pop();
                }
                if(isRedundant==1){
                    return 1;
                }
                st.pop();
            }
        }
    }
            return false;
}
