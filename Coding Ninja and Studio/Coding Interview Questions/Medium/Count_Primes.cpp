/*
Sample Input 1:
35
Sample Output 1:
5 7
Explanation For Sample Output 1:
Unique prime factors are 5 and 7.

Hence we return {5, 7}.
Sample Input 2:
14
Sample Output 2:
2 7
Constraints:
1 <= 'N' <= 10^6

Time Limit: 1 sec.
*/
/*
Sieve of Eratosthenes
Approach:

 

Sieve of Eratosthenes works by putting all the numbers till ‘N’ as true and checking if the number is prime or not from 2. if it finds that 2 is prime(that, of course, is), then it marks all its multiple as false, and it repeatedly does it till it reaches N(it reduces time by checking if it is true or not).
Initialize an empty array ‘ans’.
Make a new bool vector initialized with true and of size(N+1);
Now make a loop initialized with 2 and till N, and inside the loop, if the prime is true and it is a factor of ‘N’, push it in ‘ans’ array. and also another loop that eliminates all its multiple till n.
Then return the ‘ans’.
 

Time Complexity
O(Nlog(log(N))), where ‘N’ is the given number.

 

We are using the Sieve of Eratosthenes, so our complexity is O(Nlog(log(N))).

Space Complexity
O(N), where ‘N’ is the given number.

 

We are creating an array/vector of size ‘N’, so the space complexity is O(N).
*/
bool isPrime(int n){
    if(n<2){return 0;}
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
vector<int> countPrimes(int n)
{
    vector<int> ans;
    // Write your code here.
    for(int i=2;i<n;i++){
        if(isPrime(i) && n%i==0){
            ans.push_back(i);
        }
    }
    return ans;
}