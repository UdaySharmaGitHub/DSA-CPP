#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n =10 ;
for(int j =1;j<=n;j++){
		int ans =n;
	for(int i=1;i<=j;i++){
     ans = ans^i;
	}
	cout<<ans<<endl;
}
	return 0;
}
