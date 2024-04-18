/*
Row Wave Form
You are given a 2D array with dimensions ‘N*M’. You need to read the array elements row-wise and return a linear array that stores the elements like a wave i.e the 1st-row elements are stored from left to right, 2nd-row elements are stored from right to left, and so on.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= ‘T’ <= 10
1 <= 'N', ‘M’ <= 10^3
1 <= ‘ARR[i][j]’ <= 10^5

Where ARR[i][j] is the array element in the ith row of the jth column.

Time limit: 1 second
Sample Input 1:
2
2 2 
1 2
0 5
2 3
5 1 2
7 0 1
Sample Output 1:
1 2 5 0
5 1 2 1 0 7
Explanation of Input 1:
For test case 1, the array is traversed as:
The first row is traversed from left to right. -> [1, 2]
The second row is traversed from right to left. -> [5, 0]
Therefore the final answer is [1, 2, 5, 0].

For test case 2, the array is traversed as:
First row is traversed from left to right. -> [5, 1, 2]
Second row is traversed from right to left. -> [1, 0, 7]
Therefore the final answer is [5, 1, 2, 1, 0, 7]
Sample Input 2:
1
3 3
0 1 1
8 0 9
5 4 1
Sample Output 2
0 1 1 9 0 8 5 4 1
Explanation of Input 1:
For test case 1, the array is traversed as:
The first row is traversed from left to right. -> [0, 1, 1]
The second row is traversed from right to left. -> [9, 0, 8]
The third row is traversed from left to right -> [5, 4, 1]
Therefore the final answer is [0, 1, 1, 9, 0, 8, 5, 4, 1]
*/
#include <bits/stdc++.h> 
vector<int> rowWaveForm(vector<vector<int>> &mat) {
    // Write your code here.
    int  m = mat.size() ;
    int n = mat[0].size();
    vector<int> ans(m*n , 0);
    int k = 0 ,row = 0  ;
    while(row < m){
        if(row%2==0){
            for(int i=0;i<mat[row].size();i++){
                ans[k++] = mat[row][i];
            }
        }
        else{
            for(int i = n-1;i>=0;i--){
                ans[k++] = mat[row][i];
            }
        }
        row++;
    }
    return ans;

}
