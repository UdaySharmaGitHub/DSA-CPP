#include<bits/stdc++.h>
using namespace std;
int intPartofSqrtNumber(int n){
    int  i=0,j=n;
    int mid = i + (j-i)/2;
    int ans  =-1 ;
    while (i<=j)
    {
        /* code */
        if(pow(mid,2) == n){
            return mid;
        }
        else if(pow(mid,2)<n){
            ans = mid ;
            i = mid+1;
        }
        else{
           j =mid-1;
        }
         mid = i + (j-i)/2;
    }
    return ans;
}
double morePrecise(int n,int precise,int ipart){
 
   double factor = 1;
   double ans = ipart;
   for(int i=0;i<precise;i++){
    factor/=10;
     for(double j = ans ; j*j<n;j+=factor){
        ans = j;
     }
   }
   return ans ;
}
int main(){
    int t;
    cin>>t;
        int n;
    while (t--)
    {
        /* code */
        cin>>n;
        int p;
        cin>>p;
        int n1  =intPartofSqrtNumber(n) ;
        cout<< n1<<endl;
        cout<< morePrecise(n,p,n1)<<endl;

    }
    return 0;
    
}
