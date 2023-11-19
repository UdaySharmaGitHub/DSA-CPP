//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // time complexity is O(nlog(n))
    // Space Complexity is O(1)
    //Function to check if two arrays are equal or not.
    bool check1(vector<ll> a, vector<ll> b, int n) {
          ll  n1 = a.size();
          ll  n2 = b.size();
          if(n1!=n2){
            return 0;
          }
          sort(a.begin(),a.end());
          sort(b.begin(),b.end());
       for(ll  i = 0 ; i<n;i++){
        if(a[i]!=b[i]){
            return 0;
        }
       }
       return 1;
    }
 // time complexity is O(i+j)
    // Space Complexity is O(1)
    //Function to check if two arrays are equal or not.
 
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<ll> arr(n,0),brr(n,0);
        
        // increase the count of elements in first array
        for(ll i=0;i<n;i++)
            cin >> arr[i];
        
        
        // iterate through another array
        // and decrement the count of elements
        // in the map in which frequency of elements
        // is stored for first array
        for(ll i=0;i<n;i++)
            cin >> brr[i];
        Solution ob;
        cout << ob.check1(arr,brr,n) << "\n";
        cout << ob.check2(arr,brr,n) << "\n";

    }
	return 0;
}
// } Driver Code Ends