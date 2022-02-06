#include<bits/stdc++.h>
using namespace std;


void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	if(s[0]==s[n-1])
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
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