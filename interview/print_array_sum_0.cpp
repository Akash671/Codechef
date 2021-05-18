/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back

void solve(int n,int a[])
{
	for(int i=0;i<n;++i)
	{
		int s=0;
		for(int j=i;j<n;++j)
		{
			s+=a[j];
			if(s==0)
			{
				cout<<"["<<i<<"..."<<j<<"]"<<"\n";
			}
		}
	}
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
    	for(int i=0;i<n;i++)
    	{
    		cin>>a[i];
    	}
    	solve(n,a);
    }
	return 0;
}
