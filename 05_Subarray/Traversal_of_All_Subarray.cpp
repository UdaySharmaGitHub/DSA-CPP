   // iterate /traverse all the subarray 
#include"bits/stdc++.h"
using namespace std;
void TraversalSubArray(int a[],int n){
    	for(int i=0;i<n;i++){
		cur=0;
		for(int j=1;j<n;j++){
			cur+=a[j];
			cout<<cur<<endl;
		}
	}
}
int main(){
	int n,cur=0;
  cout<<"enter the size of the array :";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cout<<"enter the "<<i+1<<" elemtent in the array : ";
		cin>>a[i];
	}
	for(int i=0;i,n;i++){
		cout<<a[i]<<" ";
	}
	TraversalSubArray(a,n);
	return 0;
}