// Find uncommon characters of the two strings
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            
            vector<int> h1(26,0);
             vector<int> h2(26,0);
            for(int i = 0  ; i<A.size();i++){
                h1[A[i]-'a']++;
            }
             for(int i = 0  ; i<B.size();i++){
                h2[B[i]-'a']++;
            }
        string str ="";
        for(int i=0;i<26;i++){
           if((h1[i]==0 && h2[i]>=1) || (h2[i]==0 && h1[i]>=1)){
               str+='a'+i;
           }
        }
        return (str.size()==0)?"-1":str;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends