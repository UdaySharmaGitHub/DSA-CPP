#include <bits/stdc++.h> 
bool splitString(string &str){
    // Write your code here.
    int i=0 , j =str.size()-1;
    int mid = i+(j-i)/2;
    int lvowel =0 , rvowel =0;
    for(int k=0;k<=mid;k++){
      if(str[k]=='a' || str[k]=='e' || str[k]=='i' || str[k]=='o' || str[k]=='u' ||
      str[k]=='A' ||str[k]=='E' ||str[k]=='I' ||str[k]=='O' ||str[k]=='U'){
           lvowel++;
      }
    }
    for(int p=mid+1;p<=j;p++){
  if(str[p]=='a' || str[p]=='e' || str[p]=='i' || str[p]=='o' || str[p]=='u' ||
      str[p]=='A' ||str[p]=='E' ||str[p]=='I' ||str[p]=='O' ||str[p]=='U'){
        rvowel++;
      }
    }
    return (lvowel==rvowel)?1:0;
}