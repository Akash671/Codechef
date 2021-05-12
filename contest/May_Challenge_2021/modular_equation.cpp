/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		ll ans=0;
		cin>>n>>m;
		//cout<<solve(n,m)<<"\n";
		vector<long long>mod(n+1,1);
		for(ll i=2;i<=n;++i)
		{
		    ll x=m%i;
		    ans+=mod[x];
			for(ll j=x;j<=n;j+=i)
			{
				mod[j]++;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}

