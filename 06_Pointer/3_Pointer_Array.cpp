#include<iostream>
using namespace std;

int main () {

    int arr[10] = {23, 122, 41, 67};

    cout <<" address of first memory block is " << arr <<" and value is "<<arr[0]<< endl; // 0x61fed0  23
    cout <<" address of first memory block is " << &arr[0] << endl; // 0x61fed0
    cout << "1st element which is 23:" << *arr << endl; // 23
    cout << "1st element which is 23 increamented by 1: " << *arr + 1 << endl; //24
    cout << "2nd element which is 122: " << *(arr + 1) << endl; // 122
    cout << "1st element which is 23 increamented by 1:" << *(arr) + 1 << endl; //24
    cout << "3rd element which is 42: " << arr[2] << endl; // 41 
    cout << "3rd element which is 42: " << *(arr+2) << endl; // 41
    cout << "3rd element which is 42 after increamented by 1: " << *(arr+2)+1 << endl; // 42


    int i = 3;
    cout << i[arr] << endl; // i[arr] its denotes *(arr+i) or arr[i] // arr[3]=41


   int temp[10] = {1,2};
   cout << sizeof(temp) << endl; // 40
   cout << " 1st " <<  sizeof(*temp) << endl; //4
   cout << " 2nd " <<  sizeof(&temp) << endl;  // 8

   int *ptr = &temp[0];
   cout << sizeof(ptr) << endl ;// address
   cout << sizeof(*ptr) << endl ; // value present at the address
   cout << sizeof(&ptr) << endl ;  //  size of address of ptr



   int a[20] = {1,2,3,5};
   cout<< "Address of the 1st element in the array ->" << &a[0] << endl; //0x61fe54
  cout<<"Address of the 1st element in the array ->" << &a << endl;// 0x61fe54
   cout<<"Address of the 1st element in the array ->" <<a<< endl;// 0x61fe54

   int *p = &a[0];
   cout <<"Address of the 1st element in the array ->" << p << endl; // 0x61fe54
   cout <<"value of the 1st element in the array ->" << *p << endl; // 1
   cout <<"Address of the pointer p which stores the address of 1st element in the array ->" << &p << endl; // 0x61fe50


   int arr2[10]={1,2};
//ERROR // not assignable
   //arr = arr+1;
    int *ptr2 = &arr2[0];
    cout << ptr2 << endl; // address of the 1st element in the array // 0x61fe28
    cout << *ptr2 << endl; // value of the 1st element in the array // 1
    ptr2 = ptr2 + 1; // increament the pointer by 1 block and pointing the 2nd element address //0x61fe2c
    cout << ptr2<<"=="<<arr2+1<< endl; // address of the 1st element in the array 0x61fe2c==0x61fe2c
    cout << *ptr2 << endl; // 2

    return  0;
}