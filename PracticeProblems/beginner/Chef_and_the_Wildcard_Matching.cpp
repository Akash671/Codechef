#include<bits/stdc++.h>
using namespace std;


void solve()
{
	string a;
	string b;
	cin>>a;
	cin>>b;

	//
	int n=a.size();
	//2
	//s?or?
	//sco??
	//stor?
	//sco??
	int f=1;
	for(int i=0;i<n;++i)
	{
		if(a[i]==b[i])
		{
			continue;
		}
		else if(a[i]=='?' || b[i]=='?')
		{
			continue;
		}
		else
		{
			cout<<"No";
			f=0;
			break;
		}
	}

	if(f)
	{
		cout<<"Yes";
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