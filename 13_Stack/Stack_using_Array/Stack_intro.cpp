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
void push(int x){
    if(top==size){
        cout<<"Stack Overflow :"<<endl;
    }
    else{
      top++;
      stack[top]=x;
      cout<<"Element push in the Stack: "<<stack[top]<<endl;
    }
}
void pop(){
    if(top==-1){
        cout<<"Stack Underflow"<<endl;
    }
    else{
        cout<<"the element is popped from the stack : "<<stack[top]<<endl;
        top--;
    }
}
int peek(){
	if(top==-1)
		return -1;
	else
    return top;
}
void index(){
	printf("\t\t\t\tenter the operation of Stack \n");
	printf("\t\t\t\t_________________________________________________________\n");
		printf("\t\t\t\tenter the operation of Stack \n ");
	printf("\t\t\t\t_________________________________________________________ \n");
	printf("\t\t\t\t 1). push the element in the stack \n ");
	printf("\t\t\t\t 2). pop the element in the  Stack \n");
	printf("\t\t\t\t 3). Traverseing the stack \n ");
	printf("\t\t\t\t 4). searching in the stack \n");
	printf("\t\t\t\t 5). peek the stack \n ");
	printf("\t\t\t\t_________________________________________________________ \n");
}
};
int main()
{
    	int ch,t,n;
	index();
    cout<<"enter the number of test cases : "<<endl;
    cin>>t;
	while(t--){
	cout<<"\n enter the choice of the operations : "<<endl;
	cin>>ch;
	switch(ch){
		case 1:
			cout<<"enter the element you want to psuh in the stack : "<<endl;
			cin>>n;
			push(n);
			break;
			case 2:
				pop();
				break;
				case 3:
					display();
					break;
				case 4:
					cout<<"enter the element you want to search "<<endl;
					cin>>n;
				   printf("the element present at the top index position : %d \n",search(n));	
					break;
			case 5:
				printf("the top present at %d ",peek());
				break;
			default:
				printf("this is the invalid choice enter the choice again : \n");
				index();
	}
}
return 0;
}