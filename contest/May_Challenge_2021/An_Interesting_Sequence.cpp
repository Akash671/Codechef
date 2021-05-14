#include<bits/stdc++.h>
using namespace std;

long int solve(long int n)
{
	long int m=2*n+1,d;
	vector<int>v;
	for(int i=1;i<=m;++i)
	{
		d=n+pow(i,2);
		v.push_back(d);
	}
	long int ans=0;
	long int mm=v.size();
	for(int i=0;i<mm-1;++i)
	{
		ans+=__gcd(v[i],v[i+1]);
	}
	return ans;
}

int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		long int n;
		cin>>n;
		cout<<solve(n)<<"\n";
	}
	return 0;
}
