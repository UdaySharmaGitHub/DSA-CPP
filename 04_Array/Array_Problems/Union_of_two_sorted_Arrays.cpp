// C++ code to implement the approach

#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int count=0,i=0,j=0;
        while(i<n && j<m){
            if(a[i]==b[j]){
                count++;
                cout<<b[j++]<<" ";
                i++;
            }
            else if(a[i]<b[j]){
                count++;
                cout<<a[i++]<<" ";
            }
            else{
                count++;
                cout<<b[j++]<<" ";
            }
        }
        while(i<n){
        count++;
              cout<<a[i++]<<" ";
        }
       while(j<m){
        count++;
              cout<<b[j++]<<" ";
        }
        return count;
    }
  // using Set DataStructure for more Optimized Approach 
  vector<int> Unionarray(int arr1[], int m ,int arr2[], int n)
{   //using the set dataStructure
	set<int> s;
	// Remove the duplicates from arr1[]
	for (int i = 0; i < n; i++) {
		s.insert(arr1[i]);
	}
	// Remove duplicates from arr2[]
	for (int i = 0; i < m; i++) {
		s.insert(arr2[i]);
	}
	// Loading set to vector
	vector<int> vec(s.begin(), s.end());
	return vec;
}
// Using the set to fing the No of Element Present in the Union array
int NoofElementInUnion(int a[], int n, int b[], int m)  {
        //code here
        set<int> s;
        for(int i=0;i<n;i++){
            s.insert(a[i]);
        }
        for(int j=0;j<m;j++){
            s.insert(b[j]);
        }
        return s.size();
    }
};

// Driver code
int main()
{
	int t;
	cin >> t;
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
        for(int i = 0;i<n;i++)
	       cout<< a[i]<<" ";
        cout<<endl;
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
        for(int i = 0;i<m;i++)
	       cout<< b[i]<<" ";
        cout<<endl;
        Solution s;
// Brute Froce 
    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl; 
// Logic force using set
	     vector<int> uni = s.Unionarray(a,m, b, n);
    for (int i : uni) {
        cout << i << " ";
    }    
	}
	return 0;
}
