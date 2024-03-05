// C++ program to sort a string of characters
#include<bits/stdc++.h>
using namespace std;

// function to print string in sorted order
/*
               Approach - 1
Using Inbuilt Function
Time Complexity: O(n log n), where n is the length of string.
Auxiliary Space: O( 1 ).
*/
void sortString1(string &str)
{
sort(str.begin(), str.end());
cout << str;
}
/*
           Approach - 2
An efficient approach will be to observe first that there can be a total of 
26 unique characters only. So, we can store the count of occurrences of all the 
characters from ‘a’ to ‘z’ in a hashed array. The first index of the hashed array 
will represent character ‘a’, second will represent ‘b’ and so on. Finally, we will 
simply traverse the hashed array and print the characters from ‘a’ to ‘z’ the number 
of times they occurred in input string.
Time Complexity: O(Max_CHAR*n) which becomes O(n) as MAX_CHAR is  constant,So Overall Time Complexity:- O(n) where n is the length of the string.  
Auxiliary Space: O( 1 ).
*/
void sortString2(string &str){
    vector<int> freq(26,0);
    for(char &ch:str){
        freq[ch-'a']++;
    }
    str="";
    for(int i=0;i<26;i++){
        for(int j=0;j<freq[i];j++){
            str+=('a'+i);
        }
    }
    cout<<str<<endl;
}
// Driver program to test above function
int main()
{
	string s = "geeksforgeeks"; 
	sortString1(s); 
	sortString2(s); 
	return 0;
}
