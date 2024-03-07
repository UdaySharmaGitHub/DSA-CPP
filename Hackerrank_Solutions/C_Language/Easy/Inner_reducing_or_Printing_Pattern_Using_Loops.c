/*
Printing Pattern Using Loops
Print a pattern of numbers from  to  as shown below. Each of the numbers is separated by a single space.

                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4   
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      int size = 2 * n - 1;
            int arr[size][size];
      int front =0 , back = size-1;
      
while(n!=0){     
     for(int i=front;i<=back;i++){
       for(int j=front;j<=back;j++){
       if(i==front || i==back || j==front || j==back){
           arr[i][j] = n;
       }   
      }   
       }
       --n;++front;--back;
      }
      for(int i=0;i<size;i++){
          for(int j=0;j<size;j++){
              printf("%d ",arr[i][j]);
          }
          printf("\n");
      }
    return 0;
}