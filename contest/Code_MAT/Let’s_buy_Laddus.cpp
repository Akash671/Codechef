/* author : @akash kumar */

#include<bits/stdc++.h>
using namespace std;


void solve(long int n,long int m,long int a[],long int p[])
{
	for(long int i=0;i<m;++i)
	{
		int c=0;
		for(long int ii=0;ii<n-1;++ii)
		{
			for(long int jj=ii+1;jj<n;++jj)
			{
				if((a[ii]*a[jj])%p[i]==0)
				{
					c++;
				}
			}
		}
		cout<<c<<" ";
	}
	cout<<"\n";
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,m;
		cin>>n>>m;
		long int a[n];
		for(long int i=0;i<n;++i)
		{
			cin>>a[i];
		}
		long int p[m];
		for(long int i=0;i<m;++i)
		{
			cin>>p[i];
		}
		solve(n,m,a,p);
	}
}


