/*
Challenge 2 - Matrix Multiplication
Problem
Given two 2-Dimensional arrays of sizes n1Xn2 and n2Xn3. Your task is to
multiply these matrices and output the multiplied matrix.

Constraints
1 <= n1,n2,n3 <= 1,000

Approach
1. Make a nested loop of order 3. In the outer loop iterate over rows of
the first matrix and in the inner loop iterate over columns of the
second matrix.
2. Multiply rows of the first matrix with columns of the second matrix in
the innermost loop and update in the answer matrix.

Time Complexity: O(n1*n2*n3)
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
     cin>>m>>n;   // Size of the 2D array
    int arr1[m][n];
    // first Matrix
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr1[i][j];
    }
  }
     for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
  }
  // Second Matrix
      int p;
     cin>>p;   // Size of the 2D array
     int arr2[n][p];
    // first Matrix
  for(int i=0;i<n;i++){
    for(int j=0;j<p;j++){
        cin>>arr2[i][j];
    }
  }
     for(int i=0;i<n;i++){
    for(int j=0;j<p;j++){
        cout<<arr2[i][j]<<" ";
    }
    cout<<endl;
  }
  // Mutliplication of these Two Matrix and form arr3
  int arr3[m][p];
  for(int i=0;i<m;i++){
    for(int j=0;j<p;j++){
        arr3[i][j]=0;
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<p;j++){
        for(int k=0;k<n;k++){
            arr3[i][j]+=arr1[i][k]*arr2[k][j];
        }
    }
  }
       for(int i=0;i<m;i++){
    for(int j=0;j<p;j++){
        cout<<arr3[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}