/* author : @akash kumar */

#include<iostream>
using namespace std;

void solve(int n,int k,int a[])
{
	/* logic here */
	for(int i=0;i<n;++i)
	{
		if(k>=a[i])
		{
			k=k-a[i];
			cout<<1;
		}
		else
		{
			cout<<0;
		}
	}

}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;++i)
		{
			cin>>a[i];
		}
		solve(n,k,a);
		cout<<endl;
	}
	return 0;
}

