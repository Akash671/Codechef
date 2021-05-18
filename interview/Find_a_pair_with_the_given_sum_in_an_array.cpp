/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back

void solve(int n,int a[],int m)
{
    int F=1;
	for(int i=0;i<n-1;++i)
	{
		for(int ii=i+1;ii<n;++ii)
		{
			if(a[i]+a[ii]==m)
			{
				cout<<"("<<a[i]<<" "<<a[ii]<<")";
				F=0;
			}
		}
	}
	if(F)
    	cout<<"not found";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;++i)
    	{
    		cin>>a[i];
    	}
    	int m;
    	cin>>m;
    	solve(n,a,m);
    	cout<<"\n";
    }
	return 0;
}
