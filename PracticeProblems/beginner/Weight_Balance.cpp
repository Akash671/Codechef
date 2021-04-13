/* @author akash kumar */

#include<iostream>
using namespace std;

int solve(int w1,int w2,int x1,int x2,int M)
{
    int w=w2-w1;
    if(w<=x2*M && w>=x1*M)
    {
        return 1;
    }
    return 0;
    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
   {
    int w1,w2,x1,x2,M;
    cin>>w1>>w2>>x1>>x2>>M;
    cout<<solve(w1,w2,x1,x2,M)<<"\n";
   }
}

