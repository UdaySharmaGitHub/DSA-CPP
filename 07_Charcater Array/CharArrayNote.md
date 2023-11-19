#C++ char Array
String is a collection of characters. There are two types of strings commonly used in C++ programming language:

Strings that are objects of string class (The Standard C++ Library string class)
C-strings (C-style Strings)
C-strings
In C programming, the collection of characters is stored in the form of arrays. This is also supported in C++ programming. Hence it's called C-strings.

C-strings are arrays of type char terminated with null character, that is, \0 (ASCII value of null character is 0).

How to define a C-string?
char str[] = "C++";
In the above code, str is a string and it holds 4 characters.

# Although, "C++" has 3 character, the null character \0 is added to the end of the string automatically.

Alternative ways of defining a string
``` bash
char str[4] = "C++";

char str[] = {'C','+','+','\0'};

char str[4] = {'C','+','+','\0'};
```
Like arrays, it is not necessary to use all the space allocated for the string. For example:
``` bash
char str[100] = "C++";
```
Char array to string in C++
"Char" data type or a character data type is used to store letters, unlike numbers and integers, which are stored in integer and floating-point or true-false value in Booleans.

Characters are integer type in nature, their size is 1-byte and printable characters are (space), !, " , #, $, %, &, ', (, ), *, +, ,, -, ., /, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, :, ;, <, =, >, ?, @, A, a, B, b, C, c, D, d, E, e, F, f, G, g, H, h, I, i, J, j, K, k, L, l, M, m, N, n, O, o, P, p, Q, q, R, r, S, s, T, t, U, u, V, v, W, w, X, x, Y, y, Z, z, [, \, ], ^, _, `, {, |, }, ~ and DEL (delete).

We can initialize char variables using -
```bash
char ch2{ 'a' }; To print character "a".

char ch1{ 97 }; To print the value at code 97.

char ch{'5'}; To print number character "5".
```
### Note :
we have to take the n+1 size for the char array because we have to include the null character["/0"]

