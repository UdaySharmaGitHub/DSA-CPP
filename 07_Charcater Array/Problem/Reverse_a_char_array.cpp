#include<bits/stdc++.h>
using namespace std;
int getLength(char name[]){
    int count= 0 ;
    for(int i = 0 ; name[i]!='\0' ; i ++){
        count++;
    }
    return count;
}
void reverseChar(char arr[]){
   int i = 0 , j = getLength(arr) -1 ;
   while(i<j){
    swap(arr[i++],arr[j--]);
   }
}
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    cout<<"before revering char array is : "<<arr<<endl;
    cout<<"The length of the char array : "<<getLength(arr)<<endl;
    reverseChar(arr);
    cout<<"After Reversing char array is : "<<arr<<endl;
    cout<<"The length of Reversed the char array : "<<getLength(arr)<<endl;

}