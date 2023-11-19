// C++ program to demonstrate working of auto
// and type inference

#include <bits/stdc++.h>
using namespace std;

int main()
{
	// auto a; this line will give error
	// because 'a' is not initialized at
	// the time of declaration
	// a=33;

	// see here x ,y,ptr are
	// initialised at the time of
	// declaration hence there is
	// no error in them
	auto x = 4;
	auto y = 3.37;
	auto z = 3.37f;
	auto c = 'a';
	auto ptr = &x;
	auto pptr = &ptr; //pointer to a pointer
	cout << typeid(x).name() << endl
		<< typeid(y).name() << endl
		<< typeid(z).name() << endl
		<< typeid(c).name() << endl
		<< typeid(ptr).name() << endl
		<< typeid(pptr).name() << endl;

	return 0;
}
