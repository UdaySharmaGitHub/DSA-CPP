/*
Apprach 1:
Modify the array elements by making visited elements negative (if visited once) or greater than n (if visited twice or more).

Follow the steps to implement the approach:

Iterate Through the Array
=>Calculate an index based on the absolute value of each element.
    =>If the index is equal to ‘n,‘ count it as the largest element.
    =>If the element at the calculated index is negative, add (index – 1) to the result vector and modify the element at that index.
    =>If there are more than one largest elements, add ‘n – 1’ to the result vector.
=>If the result vector is empty, add ‘-1‘ to it.
=>Otherwise, sort the result vector.
=>Return the Result Vector
Below is the implementation of above approach:
*/
//   Time Comlpexity O(n)
//  Space Complexity O(1)
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
          // Increment array elements by 1
    for (int i = 0; i < n; i++) {
        arr[i] += 1;
    }
 
    // result vector
    vector<int> res;
 
    // count variable for count of
    // largest element
    int count = 0;
 for (long long  i = 0; i < n; i++) {
 
        // Calculate index value
        int index = abs(arr[i]) > n ? abs(arr[i]) / (n + 1)
                                    : abs(arr[i]);
 
        // Check if index equals largest element value
        if (index == n) {
            count++;
            continue;
        }
 
        // Get element value at index
        long long  val = arr[index];
 
        // Check if element value is negative, positive
        // or greater than n
        if (val < 0) {
            res.push_back(index - 1);
            arr[index] = abs(arr[index]) * (n + 1);
        }
        else if (val > n)
            continue;
        else
            arr[index] = -arr[index];
    }
 
    // If largest element occurs more than once
    if (count > 1)
        res.push_back(n - 1);
 
    if (res.size() == 0)
        res.push_back(-1);
    else
        sort(res.begin(), res.end());
 
    return res;
 
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends