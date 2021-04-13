/* author : @akash kumar */

#include<bits/stdc++.h>
using namespace std;

int solve(int d,int n)
{
	//int s=0;
	while(d--)
	{
	   n=(n*(n+1))/2;
	}
	return n;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			int d,n;
			cin>>d>>n;
			cout<<solve(d,n)<<endl;
		}
	return 0;
}
