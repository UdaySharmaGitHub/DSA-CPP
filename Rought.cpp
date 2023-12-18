#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n =10 ;
	int ans = 0 ;
	for(int i=1;i<=n;i++){
     ans = ans^i;
}
cout<<ans<<endl;
	return 0;
}
