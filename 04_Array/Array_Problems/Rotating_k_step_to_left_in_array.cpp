vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n =arr.size();
    for(int j=0;j<k;j++){
        int fd = arr[0];
        for(int i=0;i<n;i++){
            arr[i] =arr[i+1];
        }
        arr[n-1]=fd;
    }
    return arr;
}
