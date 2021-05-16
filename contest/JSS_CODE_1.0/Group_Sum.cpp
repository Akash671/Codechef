/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back

ll solve(ll k)
{
	//2
	//10
	//30
	//68
	ll ans=k*(k-1);//ans=6
	vector<ll>a(k);
	for(ll i=0;i<k;++i)
	{
	    ans+=2;
		a[i]=ans;
	}
	ll s=0;
	for(ll i=0;i<k;++i)
	{
		s+=a[i];
	}
	return s;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	   ll k;
	   cin>>k;
	   cout<<solve(k)<<"\n";
	}
	return 0;
}
