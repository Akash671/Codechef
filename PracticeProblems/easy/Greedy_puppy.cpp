/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back
#define ld long double

void solve()
{
   int n,k;
   cin>>n>>k;
   int ans=0;
   for(int i=1;i<=k;++i)	
   {
   	if(ans<n%i)
   	{
   		ans=n%i;
   	}
   }
   cout<<ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
       solve();
       cout<<"\n";
    }
	return 0;
}
