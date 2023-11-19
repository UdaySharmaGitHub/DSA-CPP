/*
Given an integer N and an integer D, rotate the binary representation of the integer N by D digits to the left as well as right and return the results in their decimal representation after each of the rotation.
Note: Integer N is stored using 16 bits. i.e. 12 will be stored as 0000000000001100.
*/
#include<bits/stdc++.h>
using namespace std;
class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            //code here.
            bitset<16> val(n);
            cout<<val<<endl;
           int n1 = (n<<d) , n2 = (n>>d);
           cout<<n1<<":"<<n2<<endl;
            return {n1,n2};
        }
};
//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}