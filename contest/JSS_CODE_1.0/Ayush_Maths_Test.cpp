/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back

ll solve(ll a,ll b)
{
	ll p=pow(2,b)-1;
	ll c=1;
	for(int i=p;i>=0;--i)
	{
		for(int j=0;j<=p;++j)
		{
			if(i && j==0)
			{
				c++;
			}
		}
	}
	return c%mod;
}

int main()
{
	//int t;
	//cin>>t;
	//while(t--)
	//{
	   ll a,b;
	   cin>>a>>b;
	   cout<<solve(a,b)<<"\n";
	//}
	return 0;
}
