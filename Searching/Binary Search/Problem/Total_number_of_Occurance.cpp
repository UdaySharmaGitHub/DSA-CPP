/*
First and Last Position of an Element In Sorted Array
*/
#include<bits/stdc++.h>
using namespace std;
int fistOccurence(vector<int>& arr,int n,int key){
     int st=0 , en = n-1;
    int mid =st + (en - st)/2; // optimized solution for large array
    int ans =-1;
   while (st<=en){
    if(arr[mid] == key){
        ans =mid ;
        en =mid-1; 
    }
    else if(arr[mid]<key){
        st = mid+1;
    }
    else if(arr[mid] > key){
        en = mid - 1 ;
    }
     mid =st + (en - st)/2;
   }
   return ans;
}
int lastOccurence(vector<int>& arr,int n,int key){
     int st=0 , en = n-1;
    int mid =st + (en - st)/2; // optimized solution for large array
    int ans =-1;
   while (st<=en){
    if(arr[mid] == key){
        ans =mid ;
        st =mid+1; 
    }
    else if(arr[mid]<key){
        st = mid+1;
    }
    else if(arr[mid] > key){
        en = mid - 1 ;
    }
     mid =st + (en - st)/2;
   }
   return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int,int> p;
    p.first = fistOccurence(arr,n,k);
    p.second = lastOccurence(arr,n,k);
    return p;
}
int main(){
    int t;
    cin>>t;
    int n;
    while (t--)
    {
        /* code */
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int x:arr){
            cout<<x<<" ";
        }
        int key ;
        cin>>key;
        cout<<fistOccurence(arr,n,key)<<endl;
        cout<<lastOccurence(arr,n,key)<<endl;
       pair<int , int> res = firstAndLastPosition(arr,n,key);
       cout<< res.first <<" : "<< res.second <<endl;
       cout<<"Total number of Occurance : "<<res.second-res.first+1<<endl;
    }
    
}