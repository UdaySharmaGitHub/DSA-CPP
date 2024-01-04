#include<iostream>
using namespace std;
void print(int *p) {
    cout << *p << endl; 
}

void update(int *p) {
   *p = *p + 1; // increament the value which address stored in pointer p;
}

int getSum(int *arr, int n) {

    cout << endl << "Size : " << sizeof(arr) << endl;

    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
    }
    return sum;
}
int main() {
    int value = 5;
    int *p = &value;
    print(p); // 5
    cout <<" Before value of p :" << *p<<" with address :" <<p<< endl; // 5 0x61ff08
    update(p); // 6
    cout <<" after value of p :" << *p<<" with address :" <<p<< endl; // 6 0x61ff08

    int arr[6] = {1,2,3,4,5,8};
    cout << "Sum is " << getSum(arr+3 ,3) << endl ;  
    return 0;
}