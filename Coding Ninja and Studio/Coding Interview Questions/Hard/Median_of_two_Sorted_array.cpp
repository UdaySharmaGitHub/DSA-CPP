// Median of two sorted arrays
double median(vector<int>& a, vector<int>& b) {
	// Write your code here.
	for(int i=0;i<b.size();i++){
		a.push_back(b[i]);
	}
	sort(a.begin(),a.end());
	int n = a.size();
	int mid =(n-1)/2;
	double ans= a[mid];
	if(n%2==0){
		ans = (double)(a[mid]+a[mid+1])/2;
		return ans;
	}
return ans;
}