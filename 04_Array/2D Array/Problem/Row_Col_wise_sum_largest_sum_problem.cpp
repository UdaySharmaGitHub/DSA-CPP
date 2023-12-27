#include<bits/stdc++.h>
using namespace std;
//to print row wise sum
void printColSum(int arr[][4], int row, int col) {
    cout << "Printing Sum -> ";;
    for(int col=0; col<4; col++) {
        int sum = 0;
        for(int row=0; row<3; row++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }

    cout << endl;
}
//to print row wise sum
void printRowSum(int arr[][4], int row, int col) {
    cout << "Printing Sum -> ";;
    for(int row=0; row<3; row++) {
        int sum = 0;
        for(int col=0; col<4; col++) {
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
   cout<<"Largest sum of the row is "<<maxi<<" and the row number is : "<<rowIndex<<endl;
    return rowIndex;
}
int largestColSum(int arr[][4],int row,int col){
    int maxa=INT_MIN;
    int idx = -1;
    for(int col=0;col<4;col++){
        int sum =0;
        for(int row=0;row<3;row++){
  sum+=arr[row][col];
        }
        if(sum>maxa){maxa=sum;idx=col;};
    }
    cout<<"Largest sum of the Column is "<<maxa<<" and the column number is : "<<idx<<endl;
    return idx;
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
    printRowSum(arr,3,4);
    printColSum(arr,3,4);
    int rowIndex = largestRowSum(arr,3,4);
   cout << " Max row is at index " << rowIndex<<"th"<< endl;
       int colIndex = largestColSum(arr,3,4);
   cout << " Max row is at index " << colIndex<<"th"<< endl;
    return 0;
  }