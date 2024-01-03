                      //***************** Pointers **************************//
                      // (Pointers) simple stored address .
// pointers in c
//it is  used to store the address of the element in the memeory allocation
//its decalare using the int *ptr /char *ptr/float *ptr
//format specifiers
//      %u=unsigned  %p=hexadecimal number
//       we used to typecast the pointer address in number using %u
#include<bits/stdc++.h>
using namespace std;
int main(){
	// What is a pointer? -----> Datatype which hold the address of other datatypes.
	 // & = is a (address) of  operator .
    int a=90;
	int *ptr=&a;
	printf("%p\n",ptr);   //  %p=hexadecimal number address of a =90
	printf("%d\n",a);   // print=90
	printf("%d\n",*ptr); // print=90
    printf("%d\n",*(&a)); // print=90
	printf("%u\n",ptr);  //%u=unsigned
	printf("%u\n",&ptr);   // %u=unsigned

int a1=7;
int*b=&a1;
cout<<"the value of address a is : "<<&a1<<endl;           // here is "b" is the pointers .  
cout<<"the value of the b is :" <<b<<endl;                 // b ==&a 
    // * ----> (value at) derefrence operator .           
cout<<"the value of address of b is :"<<*b<<endl;	 //  *(pointers) Gives the value at .

	// pointer to pointer is int**variable = variable . (**------> address of (address of operator) .
	int**c=&b;
	cout<<"the value of address of c is :"<<&b<<endl;      // &b == **c 
	cout<<"the value of address of c is :"<<c<<endl;          // c = &b
	cout<<"the value of address of c is :"<<*c<<endl;                          // b=*c.
	cout<<"the value of address of (address of c)is :"<<**c<<endl;	          // a=**c.
    //its decalare using the int **ptr /char **ptr/float **ptr
 // it store the address of address of pointer 
	    int i=5;
	    int *ptr1=&i;
	    int **pptr=&ptr1;  // pointer of pointers
	    printf("%d\n",*ptr1); // address of i=5
	    printf("%d\n",**pptr); // address of ptr
	return 0;
}

