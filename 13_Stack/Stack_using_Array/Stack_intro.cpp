#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int *arr;
    int size;
    int top;
// Initialized
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
// push()
void push(int x){
    if(top==size){
        cout<<"Stack Overflow :"<<endl;
    }
    else{
      top++;
      arr[top]=x;
      cout<<"Element push in the Stack: "<<arr[top]<<endl;
    }
}
//  pop()
void pop(){
    if(top>=0){
        cout<<"the element is popped from the stack : "<<arr[top]<<endl;
        top--;
    }
    else{
        cout<<"Stack Underflow"<<endl;
    }
}
//   peek()
int peek(){
	if(top==-1)
		return -1;
	else
    	return arr[top];
}
//  isEmpty()
bool isEmpty(){
	if(top==-1){
		return true;
	}
	else{
		return false;
	}
}
//  traversing
void traverseStack(){
	if(top==-1){
		cout<<"Stack Underflow"<<endl;
	}
	for(int i=top;i>=0;i--){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
};
int main()
{
    	int ch,t,n;
		cout<<"\n enter the Size of the Stack : "<<endl;
	cin>>n;
	Stack st(n);
	cout<<st.isEmpty()<<endl;
	st.traverseStack();
	st.push(1);
	cout<<st.isEmpty()<<endl;
	cout<<"The peek Element is :"<<st.peek()<<endl;
	st.push(2);
	cout<<st.isEmpty()<<endl;
	cout<<"The peek Element is :"<<st.peek()<<endl;
	st.push(3);
	cout<<st.isEmpty()<<endl;
	cout<<"The peek Element is :"<<st.peek()<<endl;
	st.push(4);
	cout<<st.isEmpty()<<endl;
	cout<<"The peek Element is :"<<st.peek()<<endl;
	st.push(5);
	cout<<st.isEmpty()<<endl;
	cout<<"The peek Element is :"<<st.peek()<<endl;
	st.push(6);
	cout<<st.isEmpty()<<endl;
	cout<<"The peek Element is :"<<st.peek()<<endl;
	st.push(7);
	cout<<st.isEmpty()<<endl;
	st.traverseStack();
	cout<<"The peek Element is :"<<st.peek()<<endl;
	cout<<st.isEmpty()<<endl;
	st.pop();
	cout<<st.isEmpty()<<endl;
	cout<<"The peek Element is :"<<st.peek()<<endl;
	st.pop();
	cout<<st.isEmpty()<<endl;
	cout<<"The peek Element is :"<<st.peek()<<endl;
	st.pop();
	cout<<st.isEmpty()<<endl;
	cout<<"The peek Element is :"<<st.peek()<<endl;
	st.pop();
	cout<<st.isEmpty()<<endl;
	cout<<"The peek Element is :"<<st.peek()<<endl;
	st.pop();
	cout<<st.isEmpty()<<endl;
	cout<<"The peek Element is :"<<st.peek()<<endl;
	st.pop();
	cout<<st.isEmpty()<<endl;
	cout<<"The peek Element is :"<<st.peek()<<endl;
	st.pop();
	cout<<st.isEmpty()<<endl;
	cout<<"The peek Element is :"<<st.peek()<<endl;
	st.pop();
	cout<<st.isEmpty()<<endl;
	
return 0;
}