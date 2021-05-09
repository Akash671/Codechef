/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;

#define ll long long int

string solve(ll n,ll x,ll k)
{
	if(x%k==0)
	{
		return "YES";
	}
	else
	{
		if(((n+1)-x)%k==0)
		{
			return "YES";
		}
		else
		{
			return "NO";
		}
	}
}

int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
	    ll n,x,k;
	    cin>>n>>x>>k;
	    cout<<solve(n,x,k)<<"\n";
	}
	return 0;
}
