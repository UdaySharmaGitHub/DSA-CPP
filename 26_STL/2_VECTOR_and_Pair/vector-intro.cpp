#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
//   Vector traversing 
// normal looping
  cout<<endl<<"Print using the Normal Looping : ";
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  } // 1 2 3 4
// Vector Iterator
  cout<<endl<<"Print using the vector Iterator : ";
  vector <int>::iterator it;
  for(it= v.begin();it!=v.end();it++){
    cout<<*it<<" ";  // where it is pointer
  }
// another method is aut0 keyword
  cout<<endl<<"Print using the Element : ";
for(auto element:v){   // element is element in a vector v
      cout<<element<<" "; //element is not a iterator
}
cout<<endl;

//-------------- pop_back(); function used the pop the last element------------//
  v.pop_back(); // 1 2 3
     for(auto element:v){
    cout<<element<<" ";
   }
   cout<<endl;
   // making the new vector
   vector<int> v2 (3,50);
   // 50 50 50
      for(auto element:v2){
    cout<<element<<" ";
   }
//--------------swap(v1,v2)-----------------------//
swap(v,v2);// v and v2 is swap together
   cout<<endl<<"THe value of vector v contains v2 values :" ; 
   for(auto element:v){
    cout<<element<<" ";
   }
   cout<<endl<<"THe valueof vector v2 contains v values :";  
    for(auto element:v2){
    cout<<element<<" ";
   }

//-------------sort(v.begin(),v.end())-------------//
// Sort the vector array
}