/**

#include<iostream>
using namespace std;

int main()
{
    //cout << "Hello,World!\n";
    long long int n;
    cin>>n;
    if(n<=2)
    {cout<<1;}
    else
    {
       int f=1;
       for(int i=2;i<n/2+1;i++)
        {
           if(n%i==0)
            {cout<<0;
              f=0;
              break;}
        }
        if(f)
        {cout<<1;}
    }
    return 0;
}*/

// A optimized school method based C++ program to check 
// if a number is prime 
#include<iostream>

using namespace std; 

  

bool isPrime(long long int n) 
{ 

    // Corner cases 

    if (n <= 1) 

        return false; 

    if (n <= 3) 

        return true; 

  

    // This is checked so that we can skip 

    // middle five numbers in below loop 

    if (n % 2 == 0 || n % 3 == 0) 

        return false; 

  

    for (long long int i = 5; i * i <= n; i = i + 6) 

        if (n % i == 0 || n % (i + 2) == 0) 

            return false; 

  

    return true; 
} 

  
// Driver Program to test above function 

int main() 
{ 
    long long int n;
    cin>>n;
    isPrime(n) ? cout <<1: cout <<0; 

    //isPrime(15) ? cout << " true\n" : cout << " false\n"; 

    return 0; 
}   
