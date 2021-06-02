#include<iostream>
using namespace std;

int main()
{
    //cout << "Hello,World!\n";
    int n;
    cin>>n;
    int m=n;
    int s=0;
    int r;
    while(n)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(s==m)
    {cout<<"YES";}
    else
    {cout<<"NO";}
    return 0;
} 
