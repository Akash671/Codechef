/*
author      :  @akash kumar
institute   :  @MIT
*/ 


#include<bits/stdc++.h>
using namespace std;

#define nl << '\n'
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
	ll n;
	cin>>n;

	//vector<ll>a(n);
	ll a[n];
	for(ll i=0;i<n;++i)
	{
		cin>>a[i];
	}

	//logic here

	//sort array vector
	//4 2 6
	//2 4 6
	
	sort(a,a+n);

	ll l=1;
	ll r=n-2;

	if(n==2)
	{
		cout<<0;
		//continue;
	}
	else if(n==3)
	{
	    //cout<<a[1]<<"-"<<a[0]<<" "<<a[2]<<"-"<<a[1]<<"\n";
		cout<<min(a[1]-a[0],a[2]-a[1]);
		//continue;
	}
	else
	{
		ll ans=0;
		ll ans2=0;
		ll d1;
		ll d2;
		ll m=INT_MAX;
		for(ll i=0;i<n-1;++i)
		{
			ans+=abs(a[i]-a[(n-1)/2]);
		}

		for(ll i=1;i<n;++i)
		{
			ans2+=abs(a[i]-a[1+(n-1)/2]);
		}
		m=min(ans,ans2);

		while(l<r)
		{
			d2=a[n-1]-a[1];
			d1=a[r]-a[0];

			m=min(m,abs(d1-d2));

			if(d1<d2)
			{
				l++;
			}
			else
			{
				r--;
			}
		}

		cout<<m;
	}
}

int main()
{
    int t;
    cin>>t;
	while(t--)
	{
		solve();
		cout<<"\n";
	}
	return 0;
}
