/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back

void solve(int n,int a[])
{
	vector<int>ze,one;
	for(int i=0;i<n;++i)// T(n) && s(n*n)
	{
		if(a[i]==0)
		{
			ze.pb(a[i]);
		}
		else
		{
			one.pb(a[i]);
		}
	}
	for(auto i:ze)
	{
		cout<<i<<" " ;
	}
	for(auto i:one)
	{
		cout<<i<<" ";
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
		solve(n,a);
		cout<<"\n";
	}
	return 0;
}
