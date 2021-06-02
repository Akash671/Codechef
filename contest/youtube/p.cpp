// C++ implementation of above solution
#include "cstring"
#include <iostream>

using namespace std;
#define MAX 10000
 
// Create a boolean array "prime[0..n]" and initialize
// all entries it as true. A value in prime[i] will
// finally be false if i is Not a prime, else true.

bool prime[MAX + 1];

void SieveOfEratosthenes()
{

    memset(prime, true, sizeof(prime));
 

    prime[1] = false;
 

    for (int p = 2; p * p <= MAX; p++) {
 

        // If prime[p] is not changed, then it is a prime

        if (prime[p] == true) {
 

            // Set all multiples of p to non-prime

            for (int i = p * 2; i <= MAX; i += p)

                prime[i] = false;

        }

    }
}
 
// find the product of 1st N prime numbers

void solve(int n)
{

    // count of prime numbers

    int count = 0, num = 1;
 

    // product of prime numbers

   // long long int prod = 1;
 

    while (count < n) {
 

        // if the number is prime add it

        if (prime[num]) {

           // prod *= num;
             cout<<num<<" ";

            // increase the count

            count++;

        }
 

        // get to next number

        num++;

    }

    //return prod;
}
 
// Driver code

int main()
{

    // create the sieve

    SieveOfEratosthenes();
 

    int n;
    cin>>n;
 

    // find the value of 1st n prime numbers

    solve(n);
 

    return 0;
}  
