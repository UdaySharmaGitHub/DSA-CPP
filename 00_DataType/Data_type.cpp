// C++ program to Demonstrate the sizes of data types
#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
	cout << "Size of char : " << sizeof(char) << " byte"<< endl;
	cout << "char minimum value: " << CHAR_MIN << endl;
	cout << "char maximum value: " << CHAR_MAX << endl;

	cout << "Size of int : " << sizeof(int) << " bytes"<< endl;
	cout << "int minimum value: " << INT_MIN << endl;
	cout << "int maximum value: " << INT_MAX << endl;

	cout << "Size of short int : " << sizeof(short int)<< " bytes" << endl;
	cout << "short int minimum value: " << SHRT_MIN << endl;
	cout << "short int maximum value: " << SHRT_MAX << endl;

	cout << "Size of long int : " << sizeof(long int)<< " bytes" << endl;
	cout << "long int minimum value: " << LONG_MIN << endl;
	cout << "long int maximum value: " << LONG_MAX<< endl;

	cout << "Size of long long  int : " << sizeof(long long int)<< " bytes" << endl;
	cout << "long long int minimum value: " << LONG_LONG_MIN << endl;
	cout << "long long int maximum value: " << LONG_LONG_MAX<< endl;

	cout << "Size of signed long int : "<< sizeof(signed long int) << " bytes" << endl;

	cout << "Size of unsigned long int : "
		<< sizeof(unsigned long int) << " bytes" << endl;

	cout << "Size of float : " << sizeof(float) << " bytes"
		<< endl;

	cout << "Size of double : " << sizeof(double)
		<< " bytes" << endl;

	cout << "Size of wchar_t : " << sizeof(wchar_t)
		<< " bytes" << endl;

	return 0;
}
