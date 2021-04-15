/* author : @akash kumar */

#include<iostream>
using namespace std;

int solve(int n,int a[])
{
   int count=0;
   int temp=a[0];
   for(int i=0;i<n;++i)
   {
       if(a[i]<=temp)
       {
           temp=a[i];
           count++;
       }
   }
   return count;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }
        cout<<solve(n,a)<<endl;
    }
    return 0;
}
