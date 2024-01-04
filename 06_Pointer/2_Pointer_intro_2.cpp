#include<iostream>
using namespace std;

int main () {

    int num  = 5 ;
    cout << num << endl;
    // address of Operator - &
    cout <<" address of num is " << &num << endl;
    int *ptr = &num;
    cout << "Address is : " << ptr << endl;
    cout << "value is : " << *ptr << endl;

    double d = 4.3;
    double *p2 = &d;
    cout << "Address is : " << p2 << endl;
    cout << "value is : " << *p2 << endl;
    cout << " size of integer is " << sizeof(num) << endl;
    cout << " size of pointer is " << sizeof(ptr) << endl;
    cout << " size of double is " << sizeof(d) << endl;
    cout << " size of pointer is " << sizeof(p2) << endl;

// Null Pointer and Value Accessed
int i=5;
int *q = &i;
cout<<q<<":"<< *q <<endl;
int *p=0; // this pointer value points to null
p=&i;
cout<<p<<":"<< *p <<endl;  // same as the above q

 int num2 = 5;
   int a = num2;
   cout << "a before " << num2 << endl; // affected
   a++;
   cout << "a after " << num2 << endl; // not affected


   int *p1  = &num2;
   cout << "before " << num2 << endl;  //5
   (*p1)++;  // we increamented the original value place at the address
   cout << "after " << num2 << endl;  // 6

    //copying a pointer
   int *q1 = p1;
   cout << p1 <<" - " << q1 << endl;
   cout << *p1 <<" - " << *q1 << endl;

    //important concept
   int i2 = 3;
   int *t = &i2;
   cout <<  (*t)++ << endl;  // print the original value and then increament by one  //3
    cout << *t << endl;  //4
   *t = *t +1;  // change the original value increamented
    cout << *t << endl; // 5
    cout << " before t " << t << endl;
    t = t + 1;  // we increamented the pointer and goes to the next pointer (+4) beacuse its integer
    cout << " after t " << t << endl;  // print the next address
    cout << *t << endl;  // we get the next pointer values
    return 0;
}