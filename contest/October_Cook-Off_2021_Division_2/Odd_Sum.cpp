/*
author    : @akash kumar
institute : MIT Moradabad
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int



void solve()
{
   ll n;
   cin>>n;

   if(n<3)
   {
    cout<<1;
   }
   else
   {
    ll ans=0;
    n=n-1;
    ans=n*(n-1);
    cout<<ans+1;
   }


}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
	   solve();
	   cout<<'\n';
	}
	return 0;
}
