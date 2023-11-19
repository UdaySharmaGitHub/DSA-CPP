#include <bits/stdc++.h> 
using namespace std;
int sumOfMaxMin(int arr[], int n){
	// Write your code here.
	int maxa = INT_MIN ,mina = INT_MAX;
	for(int i=0;i<n;i++){
		maxa = max(maxa , arr[i]);
		mina =min(mina , arr[i]);
	}
	return maxa + mina ;
}
int main(){
    int t;
    cin>>t;
    int n ;
    while (t--)
    {
        /* code */
        cin>>n;
         int arr[n];
         for(int i=0;i<n;i++){
            cin>>arr[i];
         }
         for(int x:arr){
            cout<<x<<" ";
         }
         cout<<endl<<sumOfMaxMin(arr,n)<<endl;
    }
    
}