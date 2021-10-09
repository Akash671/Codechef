/*
author    : @akash kumar
institute : MIT Moradabad
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
#define pb push_back
#define ld long double
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

void solve()
{
   ll x;
   cin>>x;
   if(x==0)	
   {
   	cout<<1;
   }
   else if(x==1)
   {
   	cout<<2;
   }
   else
   {
      ll ans=1;
      while(ans*2<=x)
      {
      	ans*=2;
      }
      ll a=(ans-1)|ans;
      int f=0;
      if(a>x)
      {
      	cout<<ans;
      	//cout<<" yes";
      	f=1;
      }
      ll b=ans*2;
      ll c=x|b;
      if(c>x && f==0)
      {
      	cout<<b;
      	//cout<<" no";
      }
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
	   cout<<"\n";
	}
	return 0;
}
