/*
Searching in a matrix

Problem: We have to find if value x is present in the 2D array.
1. While traversing in the 2D matrix, just we have to put one if statement which
checks if(a[i][j] == x) , then x is present otherwise not.
*/
#include<bits/stdc++.h>
using namespace std;
bool isPresent(int arr[][4],int m ,int n,int x){
// searching
       for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==x){
             return 1;
            }
        }
     }
     return 0;
}
//to print row wise sum
void printColSum(int arr[][4], int row, int col) {
    cout << "Printing Sum -> " << endl;
    for(int col=0; col<3; col++) {
        int sum = 0;
        for(int row=0; row<3; row++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }

    cout << endl;
}


//to print row wise sum
void printSum(int arr[][3], int row, int col) {
    cout << "Printing Sum -> " << endl;
    for(int row=0; row<3; row++) {
        int sum = 0;
        for(int col=0; col<3; col++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }

    cout << endl;
}

int largestRowSum(int arr[][4], int row, int col) {

    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int row=0; row<3; row++) {
        int sum = 0;
        for(int col=0; col<3; col++) {
            sum += arr[row][col];
        }

        if(sum > maxi ) {
            maxi = sum;
            rowIndex = row;
        }
       
    }

    cout << "the maximum sum is " << maxi << endl;
    return rowIndex;
}
int main(){
    int arr[3][4];
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cin>>arr[i][j];
    }
  }
     for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
    int x;
    cout<<"Element you Want to find :"<<endl;
    cin>>x;
    if(isPresent(arr,3,4,x)){
        cout <<"Element found"<< endl;
    }
    else{
        cout<<" Not Found" <<endl;
    }
     int ansIndex = largestRowSum(arr,3,4);
   cout << " Max row is at index " << ansIndex+1<<"th"<< endl;
    return 0;
  }