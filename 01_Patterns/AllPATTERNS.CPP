                      // solid Rectangle `
/*     
    XXXXX
    XXXXX
    XXXXX
    XXXXX   
    XXXXX
*/
/*
#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"enter the no of  row : "<<endl;
	cin>>x;
	cout<<"enter the no of colume : "<<endl;
	cin>>y;
	for(int i=1;i<=x;i++){
		for(int j=1;j<=y;j++){
			cout<<"X";
		}
		cout<<endl;
	}
	return 0;
}
*/
                // Printing a hollow rectangle
/*
  XXXXX
	X   X       // x=row=6
	X   X       // y=colume=5
	X   X
	X   X
	XXXXX 
*/
/*
#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"enter the no of  row : "<<endl;
	cin>>x;
	cout<<"enter the no of colume : "<<endl;
	cin>>y;
	for(int i=1;i<=x;i++){
		for(int j=1;j<=y;j++){
		if(j==1 || j==y || i==1 || i==x){
			cout<<"X";
		}
		else{
			cout<<" ";
		}
		}
		cout<<endl;
	}
	return 0;
}
*/
             //Printing the half Pyramid Pattern
/*
X
XX
XXX     // n=7
XXXX
XXXXX
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the value of n : "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"X";
	}
		cout<<endl;
	}
	return 0;
}
*/
           //---------------Print Half Pyramid using numbers--------------//
/*
1               1
12              22
123    n=j      333      n=i
1234            4444 
12345           55555
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the value of n : "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			// cout<<i;
			cout<<j;
	}
		cout<<endl;
	}
	return 0;
}
*/
           //------------------Printing the Inverted Half Pyramid----------------//
/*
XXXXX
XXXX         // n=7
XXX
XX
X
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the value of n : "<<endl;
	cin>>n;
	for(int i=n;i>0;i--){
		for(int j=1;j<=i;j++){
			cout<<"X";
	}
		cout<<endl;
	}
	return 0;
}
*/
        //-----------Printing the Inverted Half Pyamid Pattern with n----- //
/*  
  1 2 3 4 5 6             6 6 6 6 6 6 
  1 2 3 4 5               5 5 5 5 5 
	1 2 3  4   // X=j       4 4 4 4    // X=i
 	1 2 3                   3 3 3      
	1 2                     2 2 
  1                       1
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the value of n : "<<endl;
	cin>>n;
	for(int i=n;i>0;i--){
		for(int j=1;j<=i;j++){
			// cout<<i;
			cout<<j;
	}
		cout<<endl;
	}
	return 0;
}
*/
     //--------Print Half Pyramid after 180 degree rotation------//
/*
    *
   **
  ***         n=5
 ****
*****
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the value of n : "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
	return 0;
}
*/
       //------Floyd's triangle-------------//
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15 
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n,count=1;
	cout<<"enter the value of n : "<<endl;
	cin>>n;
  for(int i=1;i<=n;i++){
  for(int j=1;j<=i;j++){
    cout<<count<<" ";
    count++;
  }
  cout<<endl;
  }
	return 0;
}
*/
   //----------Pattern 0-1----------//
/*
1
0 1 
1 0 1
0 1 0 1
1 0 1 0 1
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the value of n : "<<endl;
	cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<1<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
	return 0;
}
*/
         //----------- Pyramid Pattern Number--------//
/*
    1
   2 2
  3 3 3         n=5
 4 4 4 4 
5 5 5 5 5
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<i<<" ";
    }
    cout<<endl;
  }
  return 0;
}
*/
         //----------- Pyramid Pattern Number-2--------//
/*
    1
   1 2
  1 2 3     n=5
 1 2 3 4
1 2 3 4 5
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<j<<" ";
    }
    cout<<endl;
  }
  return 0;
}
*/
         //-----------Palindromic pattern-------------//
/*
        1
      2 1 2
    3 2 1 2 3          n=5
  4 3 2 1 2 3 4    
5 4 3 2 1 2 3 4 5
*/
/*
#include<iostream>
using namespace std;
int main(){
    int  n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int k=i;
        for(int j=1;j<=n-i;j++){
            cout<<" "<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<k<<" ";
            k--;
        }
        for(int j=2;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}
*/
    //--------------Print Diamond using Stars------------------//
/*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/
/*
#include<iostream>
using namespace std;
int main(){
    int  n;
    cin>>n;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n-i;j++){
        cout<<" "<<" ";
      }
      for(int j=1;j<=2*i-1;j++){
        cout<<"*"<<" ";
      }
      cout<<endl;
    }
    for(int i=n;i>=1;i--){
      for(int j=1;j<=n-i;j++){
        cout<<" "<<" ";
      }
     for(int j=1;j<=2*i-1;j++){
        cout<<"*"<<" ";
      }
      cout<<endl;
    }
return 0;
}
*/
  //--------------Hollow Diamond using Stars----------------//
/*
        *
      *   *
    *       *
  *           *
*               *       n=5
*               *
  *           *
    *       *
      *   *
        *
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n-i;j++){
        cout<<" "<<" ";
      }
      for(int j=1;j<=2*i-1;j++){
        if(j==1 || j==2*i-1){
            cout<<"*"<<" ";
        }
        else{
            cout<<" "<<" ";
        }
      }
      cout<<endl;
    }
    for(int i=n;i>=1;i--){
      for(int j=1;j<=n-i;j++){
        cout<<" "<<" ";
      }
      for(int j=1;j<=2*i-1;j++){
        if(j==1 || j==2*i-1){
            cout<<"*"<<" ";
        }
        else{
            cout<<" "<<" ";
        }
      }
      cout<<endl;
    }
  return 0;
}
*/
       //-----------Hollow Diamond Inscribed in a Rectangle-----------//
/*
* * * * * * * * *
* * * *   * * * *
* * *       * * *
* *           * *
*               *
*               *    n=5
* *           * *
* * *       * * *
* * * *   * * * *
* * * * * * * * *
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*"<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1){
                cout<<"*"<<" ";
            }
            else{
                cout<<" "<<" ";
            }
        }
        for(int j=1;j<=n-i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
        for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<"*"<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1){
                cout<<"*"<<" ";
            }
            else{
                cout<<" "<<" ";
            }
        }
        for(int j=1;j<=n-i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
  return 0;
}
*/
           // -----------------Butterfly Pattern-------------//
/*

*        *
**      **
***    ***
****  ****
**********      n=5
**********
****  ****
***    ***
**      **
*        *

*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    for(int j=1;j<=2*(n-i);j++){
        cout<<" ";
    }
  for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
   }
      for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    for(int j=1;j<=2*(n-i);j++){
        cout<<" ";
    }
  for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
   }
  return 0;
}
*/
   //----------- Hollow Butterfly Pattern ------------//
/*
*        *
**      **
* *    * *
*  *  *  *
*   **   *
*   **   *
*  *  *  *
* *    * *
**      **
*        *
*/
/*
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      if(j==1 || j==i){
        cout<<"*";
      }
      else{
        cout<<" ";
      }
    }
    for(int j=1;j<=2*(n-i);j++){
      cout<<" ";
    }
    for(int j=1;j<=i;j++){
      if(j==1 || j==i){
        cout<<"*";
      }
      else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
  for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
      if(j==1 || j==i){
        cout<<"*";
      }
      else{
        cout<<" ";
      }
    }
    for(int j=1;j<=2*(n-i);j++){
      cout<<" ";
    }
    for(int j=1;j<=i;j++){
      if(j==1 || j==i){
        cout<<"*";
      }
      else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
}
*/
   //--------------Pascal Triangle-------------//
/*
     1
    1 1
   1 2 1      n=5
  1 3 3 1
 1 4 6 4 1
*/
/*
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
    int coef=1;
  for(int i=0;i<n;i++){
    for(int j=1;j<=n-i;j++){
      cout<<" ";
    }
    for(int j=0;j<=i;j++){
      if(j==0 || i==0){
        coef=1;
      }
      else{
       coef=coef*(i-j+1)/j;
      }
       cout<<coef<<" ";
    }
    cout<<endl;
  }
}
*/
   //--------- Zig-Zag Pattern----------------//
/*

  *   *
 * * * *
*   *   *

*/
/*
#include<iostream>
using namespace std;
int main(){
  int n=9;  
  for(int i=1;i<=3;i++){
    for(int j=1;j<=n;j++){
    if(((i+j)%4==0)||((i==2)&&(j%4==0))){
          cout<<"*";
      }
      else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
}
*/
     //----------Print Solid Rhombus -------------------//
/*
    *****
   *****
  *****     n=5
 *****
*****
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
  return 0;
}
*/
     //----------Print Hollow Solid Rhombus -------------------//
/*
    *****
   *   *
  *   *     n=5
 *   *
*****
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
  return 0;
}
*/
   //------------ Cage Pattern------------------------------//
/*
4 4 4 4 4 4 4 
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n=7;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
		if(j==1 || j==n || i==1 || i==n){
			cout<<"4"<<" ";
		}
		else{
		  if(j==2 || j==n-1 || i==2 || i==n-1){
			cout<<"3"<<" ";
		}
		else if(j==3 || j==n-2 || i==3 || i==n-2){
			cout<<"2"<<" ";
		}
		else if(j==4 || j==n-3 || i==4 || i==n-3){
			cout<<"1"<<" ";
		}
		}
	}
	cout<<endl;
}
return 0;
}
*/