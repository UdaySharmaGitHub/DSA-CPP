#include<iostream>
using namespace std;

int main() {

    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde"; // one extra for the null charcater'/0'
    cout << arr << endl;
    //attention here
    cout << ch << endl; // print the string
    char *c = &ch[0];
    //prints entire string
    cout << c << endl;
    char temp = 'z';
    char *p = &temp;
    cout << p << endl;
    return 0;
}