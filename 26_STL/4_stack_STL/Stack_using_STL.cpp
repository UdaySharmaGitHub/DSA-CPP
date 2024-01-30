#include<bits/stdc++.h>
using namespace std;
// stack follows LIFO
int main(){
    // Creation of Stack
    stack<int> stack;
// 0 = stack is  not empty
// 1 = stack is empty
cout<<"Stack is empty : "<<stack.empty()<<endl;
// size() return the number of element present in the stack
cout<<"Size of the Stack: "<<stack.size()<<endl; 
// Pushing in the stack
stack.push(1);
stack.push(2);
stack.push(3);
stack.push(4);
cout<<"Stack is empty : "<<stack.empty()<<endl;

// top()
cout<<"Element present in the top of the stack : "<<stack.top()<<endl;
//stack.pop()

stack.pop();
cout<<"Element present in the top of the stack : "<<stack.top()<<endl;
cout<<"Size of the Stack: "<<stack.size()<<endl; 

stack.push(5);
stack.push(6);
stack.push(7);
stack.push(8);
cout<<"Size of the Stack: "<<stack.size()<<endl; 
cout<<"Stack Traversal : "<<endl;
while(!stack.empty()){
    cout<<stack.top()<<"\t";
    stack.pop();
}
return 0;
}