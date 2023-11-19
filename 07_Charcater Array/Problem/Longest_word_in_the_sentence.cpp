#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr,n);

    int  i=0,currl = 0 , maxlen = 0;
    int st = 0 , maxst =0; // find the index of the start and the end of the maximum length word
    while (1)
    {
        if(arr[i]==' ' || arr[i]=='\0'){
            if(currl>maxlen){
                maxlen = currl;
                maxst = st;
            }
            currl = 0;
            st = i+1;
        }
        else{
            currl++;
        }
        if(arr[i] == '\0'){
            break;
        }
       i++;
    }
    cout<<maxlen<<endl;
    for(int i=0;i<maxlen;i++){
        cout<<arr[i+maxst];
    }
return 0;
}