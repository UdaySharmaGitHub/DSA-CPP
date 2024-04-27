#include <bits/stdc++.h> 
/*------------------------- APPROACH -1---------------------------------*/
#include <bits/stdc++.h> 
string convertString(string str) 
{
	// WRITE YOUR CODE HERE
	int i =0;
	while(str[i]==' '){i++;}
	str[i]=::toupper(str[i]);
	while(i<str.size()-1){
			if(str[i]==' '){
				str[i+1] = ::toupper(str[i+1]);
			}
		i++;
	}
	return str;
}
/*------------------------- APPROACH -2---------------------------------*/
string convertString(string str) 
{
	// WRITE YOUR CODE HERE
	int i =1, n = str.size();
	if(n==0){
		return str;
	}
	if(str[0]!=' '){
		str[0] = ::toupper(str[0]);
	}
	while(i<n){
        if(str[i]==' '){
			str[i+1] = ::toupper(str[i+1]);
		}
		i++;
	}

	return str;
}