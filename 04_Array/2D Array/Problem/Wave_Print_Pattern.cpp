#include <bits/stdc++.h> 
using namespace std;
// Time Complixity O(n*m);
// Space Complixity O(n+m);
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
  vector<int> ans;
    for(int col=0; col<mCols; col++) {
        if( col&1 ) {
            //odd Index -> Bottom to top
            
            for(int row = nRows-1; row>=0; row--) {
                //cout << arr[row][col] <<" ";
                ans.push_back(arr[row][col]);
            }    
        }
        else
        {
            // 0 or even iondex -> top to bottom
            for(int row = 0; row<nRows; row++) {
                //cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }   
    }
    return ans;
}
int main(){
    int m, n ;
    cin>>m>>n;
vector<vector<int>> vec( m , vector<int> (n)); 
for(int i = 0; i < m; i++) 
    { 
        for(int j = 0; j < n; j++) 
        { 
           cin>> vec[i][j];
        } 
    } 
for(int i = 0; i < m; i++) 
    { 
        for(int j = 0; j < n; j++) 
        { 
           cout<<vec[i][j]<<" ";
        }
        cout<<endl; 
    } 
    vector<int> res = wavePrint(vec,m,n);
    for(int x:res){
        cout<<x<<" ";
    }
return 0;
}