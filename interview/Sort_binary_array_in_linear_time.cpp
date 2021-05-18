/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back

void solve(int n,int a[])
{
	vector<int>v;
	for(int i=0;i<n;++i)
	{
		if(a[i]==0)
		{
			cout<<a[i]<<" ";
		}
		else
		{
		   v.pb(a[i]);
		}
	}
	for(auto i:v)
	{
		cout<<i<<" ";
	}
}
// time complexity is T(n)=O(n)
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
    	solve(n,a);
    	cout<<"\n";
    }
	return 0;
}
