#include<bits/stdc++.h>
using namespace std;
int getLength(char name[]){
    int count= 0 ;
    for(int i = 0 ; name[i]!='\0' ; i ++){
        count++;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    cout<<"The Entered char array is : "<<arr<<endl;
    cout<<"The length of the char array : "<<getLength(arr)<<endl;
}