 int BinarySearch(vector<int>& arr,int st,int en,int element){
    int mid =st + (en - st)/2; // optimized solution for large array
   while (st<=en){
    if(arr[mid] == element){
        return mid;
    }
    else if(arr[mid]<element){
        st = mid+1;
    }
    else{
        en = mid - 1 ;
    }
     mid =st + (en - st)/2;
   }
   return -1;
}
int getPivot(vector<int>& arr,int n){
    int s =0;
    int en = n-1;
    int mid = s + (en -s)/2;
    while(s<en){
        if(arr[mid]>=arr[0]){
            s = mid+1;
        }
        else{
            en =mid ;
        }
        mid = s + (en -s)/2;
    }
    return s;
}
int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot = getPivot(arr,n);
    if(k>=arr[pivot] && k<= arr[n-1]){
          return BinarySearch(arr,pivot,n-1,k);
    }
    else{
                return BinarySearch(arr,0,pivot-1,k);
    }

}
