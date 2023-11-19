vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here. 
 // Approach is simple 
   //   1 2 3 4 5 ->  4 5 1 2 3 
   // Explanation 
   //      1 2 3 4 5 -> reverse(0 index to k index) -> 3 2 1 4 5
   //      3 2 1 4 5 -> reverse(k index to n index) -> 3 2 1 5 4
   //      3 2 1 5 4 -> reverse(k index to n index) -> 4 5 1 2 3


         int n =arr.size() ;
   k = k%n;
   reverse(arr.begin(),arr.begin() + (k)); 
   reverse(arr.begin() + k, arr.end());
   reverse(arr.begin(),arr.end());
return arr; 
}
