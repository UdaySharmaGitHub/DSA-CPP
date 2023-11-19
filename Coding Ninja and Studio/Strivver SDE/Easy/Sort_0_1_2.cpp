#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
void sort012(int arr[], int n) {
 int s = 0 , en = n-1 , mid =0;
 while(mid<=en){
     if(arr[mid]==0){
         swap(arr[mid],arr[s]);
         s++;
         mid++;
     }
     else if(arr[mid]==2){
         swap(arr[mid],arr[en]);
         en--;
     }
     else{
         mid++;
     }
 }
}
int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort012(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}