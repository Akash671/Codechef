/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;


long long int solve(long long int x,unsigned int y,int p)
{
	int res=1;
	x=x%p;
	if(x==0)
	{
		return 0;
	}
	while(y>0)
	{
		if(y & 1)
		{
			res=(res*x)%p;
		}
		y=y>>1;
		x=(x*x)%p;
	}
	return res;
}

int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int mm=pow(10,9)+7;
		long long int ans=solve(2,n-1,mm);
		cout<<ans<<"\n";
	}
	return 0;
}

