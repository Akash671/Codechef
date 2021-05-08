/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;

#define ll long long int

string solve(ll n,ll x,ll k)
{
    int c=0;
    ll d;
    vector<int>v1;
    vector<int>v2;
		    for(int i=0;i<n+2;++i)   
		    {
		    	d=i*k;
		    	if(d<=n+1)
		    	{
		    	   v1.push_back(d);
		    	}
		    	else
		    	{
		    		break;
		    	}
		    	
		    }
		for(int i=0;i<n+2;i++)
		    {
		    	d=n+1-i*k;
		    	if(d<=n+1)
		    	{
		    		v2.push_back(d);
		    	}
		    	else
		    	{
		    		break;
		    	}
		    }
	for(int i=0;i<v1.size();++i)
	{
		if(v1[i]==x | v2[i]==x)
		{
			return "YES";
		}
	}
	return "NO";
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,x,k;
		cin>>n>>x>>k;
		cout<<solve(n,x,k)<<"\n";
	}
	return 0;
}
