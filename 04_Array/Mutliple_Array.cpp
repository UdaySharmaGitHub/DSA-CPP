           // 1,2,3,4,5-D Array //
        // 1-D array
#include<iostream>
using namespace std;
int main(){
	int a[1000];
	int i,n;
	cout<<" enter the size of the array : ";
	cin>>n;
	cout<<"enter the elments in 1-D array :"<<endl;
	for(i=0;i<n;i++){
		cout<<endl<<"enter the elment "<<i+1<<" in the array : ";
			cin>>a[i];
			}
	for(i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
	return 0;
}   
            // 2-D array

#include<iostream>
using namespace std;
int main(){
	int a[100][100];
	int x,y,i,j;
	cout<<"printing the 2-D array : "<<endl;
	cout<<"enter the row size of the array : ";
	cin>>x;
	cout<<"enter the coloumn size of the array : ";
    cin>>y;
    for(i=0;i<x;i++){
    	for(j=0;j<y;j++){
    		cout<<" enter the a["<<i<<","<<j<<"]"<<"elment of the array : "; 
            cin>>a[i][j];	
		}
	}
    for(i=0;i<x;i++){
	    for(j=0;j<y;j++){
		   cout<<a[i][j]<<" ";
	}
	cout<<endl;
}
return 0;
}
//    3-d array

#include<iostream>
using namespace std;
int main(){
	int a[3][3][3];
	int i,j,k;
	cout<<"enter the elments in 3-D array :"<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				cout<<"enter the elment a("<<i<<","<<j<<","<<k<<") in the array : ";
			cin>>a[i][j][k];
			}
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				cout<<a[i][j][k]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
//       4-D Array

#include<iostream>
using namespace std;
int main(){
	int a[3][3][3][3];
	int i,j,k,l;
	cout<<"printing 4-d array "<<endl;
	cout<<"enter the elment in the 4-d array "<<endl;
//		for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			for(k=0;k<3;k++){
//				for(l=0;l<3;l++){
//					cout<<endl<<"enter the elment a["<<i<<"]["<<j<<"]["<<k<<"]["<<l<<"] in array : ";
//					cin>>a[i][j][k][l];
//				}}}}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				for(l=0;l<3;l++){
						a[i][j][k][l]=i*j*k*l;
						cout<<a[i][j][k][l]<<" ";
				}
					cout<<endl;
			}
				cout<<endl;
		}
	}
	return 0;
}
//       5-D Array
#include<iostream>
using namespace std;
int main(){
	int a[3][3][3][3][3];
	int i,j,k,l,m;
	cout<<"printing 5-d array "<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				for(l=0;l<3;l++){
					for(m=0;m<3;m++){
						a[i][j][k][l][m]=i*j*k*l*m;
						cout<<a[i][j][k][l][m]<<" ";		
					}
					cout<<endl;
				}
				cout<<endl;
			}
        } 
	}
	return 0;
}