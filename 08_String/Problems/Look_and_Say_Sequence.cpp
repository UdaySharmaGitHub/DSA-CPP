/*
Find the n’th term in Look-and-say (Or Count and Say) Sequence. The look-and-say sequence is the sequence of the below integers: 
1, 11, 21, 1211, 111221, 312211, 13112221, 1113213211, … 

How is the above sequence generated? 
n’th term is generated by reading (n-1)’th term.

The first term is "1"
Second term is "11", generated by reading first term as "One 1" 
(There is one 1 in previous term)
Third term is "21", generated by reading second term as "Two 1"
Fourth term is "1211", generated by reading third term as "One 2 One 1" 
and so on
How to find n’th term? 

Example: 
Input: n = 3
Output: 21
Input: n = 5
Output: 111221
*/
// C++ program to find n'th term in look and say
// sequence
#include <bits/stdc++.h>
using namespace std;

// Returns n'th term in look-and-say sequence
string countnndSay(int n)
{
	// Base cases
	if (n == 1)	 return "1";
	if (n == 2)	 return "11";

	// Find n'th term by generating all terms from 3 to
	// n-1. Every term is generated using previous term
	string str = "11"; // Initialize previous term
	for (int i = 3; i<=n; i++)
	{
		// In below for loop, previous character
		// is processed in current iteration. That
		// is why a dummy character is added to make
		// sure that loop runs one extra iteration.
		str += '$';
		int len = str.length();

		int cnt = 1; // Initialize count of matching chars
		string tmp = ""; // Initialize i'th term in series

		// Process previous term to find the next term
		for (int j = 1; j < len; j++)
		{
			// If current character doesn't match
			if (str[j] != str[j-1])
			{
				// Append count of str[j-1] to temp
				tmp += cnt + '0';

				// Append str[j-1]
				tmp += str[j-1];

				// Reset count
				cnt = 1;
			}

			// If matches, then increment count of matching
			// characters
			else cnt++;
		}

		// Update str
		str = tmp;
	}

	return str;
}

// Driver program
int main()
{
	int N = 3;
	cout << countnndSay(N) << endl;
	return 0;
}
