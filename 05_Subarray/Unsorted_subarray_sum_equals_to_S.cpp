/*Given an unsorted array A of size N of non-negative integers, find a continuous
subarray which adds to a given number S.*/
#include<bits/stdc++.h>
using namespace std;
// This is brute force solution
void SubarraySumEqualToSBF(int a[],int n){
int s,countSA=0,sum=0;
cin>>s;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
         if(sum==s){
         cout<<endl<<"the sum from index "<<i<<":"<<j<<"is : "<<sum<<endl;
         countSA++;
         for(int k=i;k<=j;k++){
            // its give the element of the array
            cout<<a[k]<<"\t";
         }
         }
        }
    }
    cout<<endl<<"the Total number of Subarray of sum "<<s<<" is "<<countSA<<endl;
}
// Optimized apporach  2-pointer
void SubarraySumEqualToSOA(int a[],int n){
    int s;
    cin>>s;
    int currSum=0,st=-1,en=-1,i=0,j=0;
while(j<n && currSum+a[j]<=s){
             currSum+=a[j];
                 j++;
    }
if(currSum==s){
 cout<<endl<<"the sum from index "<<i+1<<":"<<j<<"is : "<<s<<endl;
 return ;
}
 while(j<n){
    currSum+=a[j];
    while(currSum>s){
            currSum-=a[i];
        i++;
    }
    if(currSum==s){
        st=i+1;
        en=j+1;
        break;
    }
    j++;
   }
       cout<<endl<<"the sum from index "<<st<<":"<<en<<"is : "<<s<<endl;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
 SubarraySumEqualToSOA(a,n);
 return 0;
}