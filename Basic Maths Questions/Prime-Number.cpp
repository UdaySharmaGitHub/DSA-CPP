#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
while(1){
    cout<<"Enter the number to check weather is Prime or not : "<<endl;
        cin>>n;
    int flag=0;
        for(int i=2; i<n ; i++){
        if(n%i==0){
            cout<<"NUmber "<<n<<" is Not a prime"<<endl;
            flag=1;
            break;
        }
    }
 if(flag==0){
            cout<<"NUmber "<<n<<" is a prime"<<endl;
    }
}
}
