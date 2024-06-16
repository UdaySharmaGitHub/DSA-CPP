/*
Approach

The code uses the Sieve of Eratosthenes algorithm, an efficient method to find all prime numbers up to a given limit. The algorithm marks the multiples of each prime number as non-prime (composite) numbers.

Initialize a counter variable count to keep track of the number of prime numbers found.

Create a boolean vector prime of size n+1, where prime[i] represents whether i is prime or not.

Set prime[0] and prime[1] to false as 0 and 1 are not prime numbers.

Start iterating from i = 2 up to i = n-1 (inclusive) using the for loop. For each value of i:

a. If prime[i] is true, it means i is a prime number. So, increment the count variable.

b. Mark all multiples of i as non-prime (composite) numbers. Starting from j = 2*i, keep incrementing j by i until j < n. For each value of j, set prime[j] to false.

After the loop, the vector prime will have true for prime numbers and false for non-prime numbers.

Return the value of count, which represents the number of prime numbers less than n.
*/
#include<bits/stdc++.h>
using namespace std;
int countPrime(int n){
    int count =0;
    vector<bool> prime(n+1,true);
    prime[0] = prime[1]=false;
    for(int i=2;i<=n;i++){
        if(prime[i]){
            count++;
            for(int j=2*i;j<=n;j+=i){
                prime[j]=0;
            }
        }
    }
        return count;
}
int main(){
    int n;
    cin>>n;
    cout<<countPrime(n)<<endl;
    return 0;
}
