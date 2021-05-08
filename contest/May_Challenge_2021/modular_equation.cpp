/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;

int solve(int n,int m)
{
	int ans=0;
	for(int i=1;i<=n;++i)
	{
		//int c=0;
		for(int j=i+1;j<=n;++j)
		{
			if(((m%i)%j)==((m%j)%i) && i<j)
			{
				ans++;
				//c++;
			}
		}
		//cout<<c<<" ";
	}
	return ans;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		cout<<solve(n,m)<<"\n";
	}
	return 0;
}

