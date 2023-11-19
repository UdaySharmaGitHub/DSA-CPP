# String

### ***What is String?***
Strings are considered a data type in general and are typically represented as arrays of bytes (or words) that store a sequence of characters. Strings are defined as an array of characters. The difference between a character array and a string is the string is terminated with a special character ‘\0’
Below are some examples of strings:

“geeks” , “for”, “geeks”, “GeeksforGeeks”, “Geeks for Geeks”, “123Geeks”, “@123 Geeks”

###***How String is represented in Memory?***
In C, a string can be referred to either using a character pointer or as a character array. When strings are declared as character arrays, they are stored like other types of arrays in C. For example, if str[] is an auto variable then the string is stored in the stack segment, if it’s a global or static variable then stored in the data segment, etc.

### ***How to Declare Strings in various languages?***
Below is the representation of strings in various languages:
```bash
#include <iostream> 
#include <string> 
using namespace std; 
  
int main(){ 
    // Declare and initialize the string 
    string str1 = "String dataStructure!"; 
    // Initialization by raw string 
    string str2("A Computer Science Portal"); 
    // Print string 
    cout << str1 << endl << str2; 
    return 0; 
}
```
General Operations performed on String:
Here we are providing you with some must-know concepts of string:

***1. Concatenation of Strings***
The process of combining more than one string together is known as Concatenation. String Concatenation is the technique of combining two strings. 
There are two ways to concatenate two strings:

a) String concatenation without using any inbuilt methods:
Below is the algorithm for the Concatenation of two strings:

***Algorithm:*** CONCATENATE (STR1, STR2, STR3)
```bash
1. LEN1 = LENGTH(STR1).
2. LEN2 = LENGTH(STR2).
3. SET I = 0.
4. Repeat Steps 5 and 6 while I < LEN1-1:
5.     STR3[I] = STR1[I].
6.     SET I = I+1.
7. SET J = 0.
8. Repeat Steps 9 to 11 while I < (LEN1 + LEN2 - 2):
9.     STR3[I] = STR2[J].
10.    J = J+1.
11.    I = I+1.
12.Exit.
```