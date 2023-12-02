#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n>0){
		int lastdigit=n%10;
		cout<<lastdigit<<"\t";
		n=n/10;
	}
}