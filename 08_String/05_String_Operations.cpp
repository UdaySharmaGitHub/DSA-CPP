#include<bits/stdc++.h>
using namespace std;
int main(){
    // Concatination of Strings 
    // 1st method
    string fname = "Uday ";
    string lname = "Sharma";
    //Simple adding
    cout<<fname+lname<<endl;
/*
            -----------------------------------------------1). s1.append() ----------------------------------------------------
Inserts additional characters at the end of the string (can also be
done using ‘+’ or ‘+=’ operator). Its time complexity is O(N) where N is the
size of the new string.
*/
// fname +=lname; // appending the first string with the last string 
fname.append(lname);
cout<<fname<<endl;

/*
      ----------------------------------------------- 2.)assign(): ------------------------------------------------- 
Assigns new string by replacing the previous value (can also be
done using ‘=’ operator).
*/
string sNotassign = "DataStructure";
cout<<"Before Assigning the Function :"<<sNotassign<<endl;  //Before Assigning the Function :DataStructure
sNotassign.assign("Algorithm");
cout<<"After Assigning the Function :"<<sNotassign<<endl;  // After Assigning the Function :Algorithm

/*
    ----------------------------------------------3) .at():-----------------------------------------------------------
Returns the character at a particular position (can also be done using ‘[
]’ operator). Its time complexity is O(1).
*/
string atFunctionstr = "Competetive Programming";
cout<<atFunctionstr.at(5)<<" == "<<atFunctionstr[5]<<endl;  // t == t

/*
     ---------------------------------------- 4) .begin():--------------------------------------
Returns an iterator pointing to the first character. Its time complexity is O(1).
*/
/*
    -----------------------------------------5) .end():------------------------------------------
 Returns an iterator pointing to a position which is next to the last
character. Its time complexity is O(1).
*/

/*
    -----------------------------------------6) .clear():------------------------------------------
     Erases all the contents of the string and assign an empty string (“”)
of length zero. Its time complexity is O(1).
*/
string strClear = "asd hkjhkj uqwoiueqr klkjl";
cout<<"Before Clear Function : "<<strClear<<endl; //  Before Clear Function : asd hkjhkj uqwoiueqr klkjl
strClear.clear();
cout<<"After Clear Function : "<<strClear<<endl;  //  After Clear Function :

/*
    -----------------------------------------7) .compare(): ------------------------------------------
Compares the value of the string with the string passed in the
parameter and returns an integer accordingly. Its time complexity is O(N +
M) where N is the size of the first string and M is the size of the second
string.
*/
string strc1 = "abc";
string strc2 = "xyz";
cout<<"Comparing the string answer is in boolean form : "<<strc2.compare(strc1)<<endl;  // 0
if(!strc2.compare(strc1)){
    cout<<"String are equales"<<endl;
}
else{
    cout<<"String are not equal"<<endl;
}

/*
    -----------------------------------------8) .c_str():------------------------------------------
Convert the string into C-style string (null terminated string) and
returns the pointer to the C-style string. Its time complexity is O(1).
*/

/*
    -----------------------------------------9) empty():------------------------------------------
 Returns a boolean value, true if the string is empty and false if the
string is not empty. Its time complexity is O(1).
*/
string strEmpty = "this is String";
cout<<"Empty Function : "<<strEmpty.empty()<<endl; //  0 because it not empty
strEmpty.clear(); // Clearing the String and become empty;
cout<<"Empty Function : "<<strEmpty.empty()<<endl; //  1 after clear() function 

/*
----------------------------------------10) erase(index_number,number_of_time_to_erase):------------------------------------------
10.erase(): Deletes a substring of the string. Its time complexity is O(N) where
N is the size of the new string.
*/
string strErase = "this is Erase Function";
cout<<"After using the erase(index_number,number_of_time_to_erase) function :"<<strErase.erase(3,5)<<endl; // erase from the 3rd index and erase 5 character

return 0;
}