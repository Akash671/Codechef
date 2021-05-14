/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

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
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		ll x;
		ll k;
		cin>>n>>x>>k;
		cout<<solve(n,x,k)<<endl;
	}
	return 0;
}
