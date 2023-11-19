#include<bits/stdc++.h>
using namespace std;
void setarray(int arr[],int n){
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
}
void getarray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
int RecuresiveBinarySearch(int arr[], int st, int en, int x)
{
    if (en>= st) {
        int mid = st + (en - st) / 2;
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x){
            return RecuresiveBinarySearch(arr, st, mid - 1, x); }
 
        // Else the element can only be present
        // in right subarray
        else{
        return RecuresiveBinarySearch(arr, mid + 1, en, x);
    }
    }
 
    // We reach here when element is not
    // present in array
    return -1;
}
int main(){
    int n;
int t;
cin>>t;
while (t--)
{
     cin>>n;
    int arr[n];
    setarray(arr,n);
    getarray(arr,n);
    cout<<endl;
    int x;
    cin>>x;
 int result = RecuresiveBinarySearch(arr, 0, n - 1, x);
    (result == -1)? cout << "Element is not present in array":cout << "Element is present at index " << result;
}

    return 0;
}