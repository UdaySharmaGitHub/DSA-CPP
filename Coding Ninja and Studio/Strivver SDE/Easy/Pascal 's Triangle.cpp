#include <bits/stdc++.h>
vector<vector<long long int>> printPascal(int n) 
{
  long long int coef = 1;
  // Write your code here.
   vector<vector<long long int>> ans ;
  for(int i=0;i<n;i++){
  vector<long long int> ans2;
    for(int j=0;j<=i;j++){
  if( j==0 || i==0){
   coef =1;
  }
  else{
    coef = coef*(i-j+1)/j;
  }
   ans2.push_back(coef);
    }
    ans.push_back(ans2);
  }
  return ans;
}
