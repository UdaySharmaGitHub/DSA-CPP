#include <bits/stdc++.h> 
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

// simple methods 
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
    sort(arr.begin(),arr.end())
	return {arr[k-1],arr[n-k]};
}

// using the set datastructure
void kthSmallestLargest(int arr[], int n, int k) {
    //Write your code here
            sort(arr,arr+n);
  set<int> ans;
  for(int i=0;i<n;i++){
     ans.insert(arr[i]);
  }
  set<int>::iterator itr;
  if(k <=ans.size()){
      k--;
      set<int> :: iterator itr1 = ans.begin();
            set<int> :: iterator itr2 = ans.end(); 
            itr2--;
             advance(itr1, k );
            advance(itr2,-k );
            cout << *itr2 <<" " << *itr1<<endl;
  }
  else{
      cout<<-1<<" "<<-1<<endl;
  }
}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        kthSmallestLargest(arr, n, k);
        t--;
    }
    return 0;
}