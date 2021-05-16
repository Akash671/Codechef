/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back

int solve(int n,int m)
{
    int ii=1;
    int tt;
	while(1)
	{
	    
	    int t=n;
		for(int i=1;i<=n;++i)
		{
			t=(t-ii)+n;
			if(t==m)
			{
				return tt-n;
			}
		     tt=t;
		}
		ii++;
	}
	return 0;
}

int main()
{
	//int t;
	//cin>>t;
	//while(t--)
	//{/
		
	//}
	int x,y;
	cin>>x>>y;
	cout<<solve(x,y)<<"\n";
	return 0;
}
