/*
Spiral Order Matrix Traversal

Problem: We have to print the given 2D matrix in the spiral order. Spiral
Order means that firstly, first row is printed, then last column is printed,
then last row is printed and then first column is printed, then we will come
inwards in the similar way.

Algorithm: (We are given 2D matrix of n X m ).
1. We will need 4 variables:
a. row_start - initialized with 0.
b. row_end - initialized with n-1.
c. column_start - initialized with 0.

d. column_end - initialized with m-1.
2. First of all, we will traverse in the row row_start from column_start
to column_end and we will increase the row_start with 1 as we have
traversed the starting row.
3. Then we will traverse in the column column_end from row_start to
row_end and decrease the column_end by 1.
4. Then we will traverse in the row row_end from column_end to
column_start and decrease the row_end by 1.
5. Then we will traverse in the column column_start from row_end to
row_start and increase the column_start by 1.
6. We will do the above steps from 2 to 5 until row_start <= row_end
and column_start <= column_end.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
     cin>>m>>n;   // Size of the 2D array
    int arr[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
  }
int row_start = 0 ,row_end = m-1;
int col_start = 0 , col_end = n-1;
while(row_start<= row_end && col_start<=col_end){
    for(int col=col_start;col<=col_end;col++){
        cout<<arr[row_start][col]<<" ";
    }
    row_start++;
    for(int row=row_start;row<=row_end;row++){
        cout<<arr[row][col_end]<<" ";
    }
    col_end--;
    for(int col =col_end;col>=col_start;col-- ){
        cout<<arr[row_end][col]<<" ";
    }
    row_end--;
    for(int row=row_end;row>=row_start;row--){
        cout<<arr[row][col_start]<<" ";
    }
    col_start++;
}
    return 0;
}