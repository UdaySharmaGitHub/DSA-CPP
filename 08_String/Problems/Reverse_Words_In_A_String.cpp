#include<stack>
string reverseString(string &str){
// Write your code here.
//vector<string> temp;
string s="";
stack<string> stack;
for(auto &ch:str){
if(ch!=' ')
s+=ch;
if(ch==' ' &&s!="" ){
stack.push(s);
s="";
}
}
if(s!="") stack.push(s);
s="";
while(!stack.empty()){
s+=stack.top();
s+=' ';
stack.pop();
}
return s;

}