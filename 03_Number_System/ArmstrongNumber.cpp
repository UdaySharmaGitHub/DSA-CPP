string armstrongNumber(int n){
        // code here
  int sum =0;
	int armstrongno=n;
	while(n>0){ 
		int  lastdigit=n%10;
		sum+=pow(lastdigit,3);
		n=n/10;
	}
	if(sum==armstrongno){
		return "Yes";
	}
	else{
		return "No";
	}
    }