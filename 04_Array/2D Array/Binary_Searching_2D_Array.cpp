#include <bits/stdc++.h> 
using namespace std;
  // Time Complexity O(log(row*col))
bool binaySearch(vector<vector<int>> matrix, int target) 
{
    // Write your code here.
 int row = matrix.size();
 int col = matrix[0].size();
 int st = 0;
 int en = row*col-1;
 int mid = st + (en -st)/2 ;
 while(st<=en){
    int element = matrix[mid/col][mid%col];
    if(element == target){
        return 1;
        }
    else if(element>target){
         en =mid-1;
    }
    else{
         st = mid+1;
    }
mid = st+ (en -st)/2 ;
 }
 return 0;
}
#include<bits/stdc++.h>
using namespace std;
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
    int x;
    cout<<"enter the you want to search : ";
    cin>>x;
string ans = (binaySearch(vec,x)==0)?"Element not Fount":"Element found";
cout<<ans<<endl;
return 0;
}