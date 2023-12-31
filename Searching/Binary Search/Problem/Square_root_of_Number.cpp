int floorSqrt(int n)
{
    // Write your code here.
    // !st Approach Don't Use it
    // return sqrt(n);   // one line Approach
    int s =0 ,en = n;
    int mid = s+(en-s)/2;
    int ans =-1;
    while(s<=en){
        if(pow(mid,2) == n){
            return mid;
        }
        else if(n>pow(mid,2)){
            ans =mid;
            s = mid+1;
        }
        else if(n<pow(mid,2)){
            en =mid-1;
        }
        mid = s+(en-s)/2;
    }
    return ans;
}
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        long long int i=0, j = x , ans =-1;
        if(x==0) return 0;
        if(x==1) return 1;
        else{
            long long mid = i+(j-i)/2;
            while(i<=j){
                if(pow(mid,2)==x){
                    return mid;
                }
                else if(pow(mid,2)<x){
                    ans= mid;
                    i =mid+1;
                }
                else if(pow(mid,2)>x){
                    j = mid-1;
                }
                mid = i+(j-i)/2;
            }
        }
        return ans;
    }
};
//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}
// } Driver Code Ends