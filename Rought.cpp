// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
vector<int> prd(vector<int> o){
    vector<int> answer;
	int temp ,ans;
    for(int i=0;i<o.size();i++){
    ans = 0 ; temp = o[i];
        while(temp){
            ans += temp%10;
            temp/=10;
        }
        answer.push_back(ans);
    }
    return answer;
}
int main() {
    int n ;
    cin>>n;
    vector<int>o;
	 int temp;
    for(int i  =0  ; i<n;i++){
        cin>>temp;
        o.push_back(temp);
    }
    vector<int> res  = prd(o);
    for(int i:res){
        cout<<i<<" ";
    }
}