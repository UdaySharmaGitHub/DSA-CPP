#include<bits/stdc++.h> 
bool checkMeta(string &str1, string &str2)
{
    // Write your code here.
  if(str2.size()!=str1.size()){ return 0;} // check if the size is different 
  if(str1==str2) return 0;  // if the both string same then no meta string is there
  sort(str1.begin(),str1.end());  // sort the string O(nlog(n)) complexity
  sort(str2.begin(),str2.end()); 
  return str1==str2;  // check these meta string a equal after sorting or not
}

