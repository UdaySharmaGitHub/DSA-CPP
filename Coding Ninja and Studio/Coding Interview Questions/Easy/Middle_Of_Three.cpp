#include <bits/stdc++.h> 
int middleOfThree(int x, int y, int z)
{
    // Write your code here   
    int max1 = max(x,y);
    max1 = max(max1,z);
    int min1 = min(x,y);
    min1 = min(min1,z);
    if(x>min1 && x<max1){
        return x;
    }
    if(y>min1 && y<max1){
        return y;
    }
    if(z>min1 && z<max1){
        return z;
    }
}
#include <bits/stdc++.h> 

int middleOfThree(int a, int b, int c)

{

    int sum = a + b + c;

    int maxVal = max(a, max(b, c));

    int minVal = min(a, min(b, c));

    int middle = sum - maxVal - minVal;

    return middle;

}