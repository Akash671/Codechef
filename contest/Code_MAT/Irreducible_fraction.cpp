/* author : @akash kumar */

#include<bits/stdc++.h>
using namespace std;

string solve(int p,int q)
{
	int d=__gcd(p,q);
	int P=p,Q=q;
	p=p/d;
	q=q/d;
	if(p!=P || q!=Q)
	{
		return "NO";
	}
	return "YES";
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int p,q;
		cin>>p>>q;
		cout<<solve(p,q)<<"\n";
	}
}

