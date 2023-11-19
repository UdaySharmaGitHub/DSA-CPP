int floorSqrt(int n)
{
    // Write your code here.
    // !st Approach Don't Use it
    // return sqrt(n);   // one line Approach
    int s =0 ,en = n;
    int mid = s+(en-s)/2;
    int ans =-1;
    while(s<=en){
        if(pow(mid,2) == n){
            return mid;
        }
        else if(n>pow(mid,2)){
            ans =mid;
            s = mid+1;
        }
        else if(n<pow(mid,2)){
            en =mid-1;
        }
        mid = s+(en-s)/2;
    }
    return ans;
}
