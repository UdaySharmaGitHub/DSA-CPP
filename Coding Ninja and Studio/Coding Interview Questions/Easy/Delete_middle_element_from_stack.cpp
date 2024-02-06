/*
 Delete middle element from stack
Sample Input 1:
2
4
1 2 3 4 5
7
83 74 67 49 94 8 11 1
Sample Output 1:
1 2 4 5
83 74 67 94 8 11 1
Explanation for Sample 1:
In the 1st testcase, there are an odd number of elements, hence the middle element is clearly the (N+1) / 2th element which is 3, and is removed from the stack in the output.

In the 2nd testcase, there are an odd number of elements, hence the middle element is clearly the (N+1) / 2th element which is 49, and is removed from the stack in the output.
Sample Input 2:
3
1
5 10    
4
1 3 4 2 7
5
9 5 2 7 8 6
Sample Output 2:
10
1 3 2 7
9 5 7 8 6
*/
#include <bits/stdc++.h> 
void solve(stack<int>&inputStack,int count ,int size){
   // base case
if(count == size/2){
   inputStack.pop();
   return;
}
int num = inputStack.top();
inputStack.pop();
// Recursive Call
solve(inputStack,count+1,size);

inputStack.push(num);
}
void deleteMiddle(stack<int>&inputStack, int N){
   // Write your code here
   int count =0;
   solve(inputStack,count,N);
   
}