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
   int a[n];
   int f=0;
   for(int i=0;i<n;++i)	
   {
   	cin>>a[i];
   	if(a[i]==k)
   	{
   		f=1;
   	}
   }
   if(f)
   {
   	cout<<1;
   }
   else
   {
   	cout<<-1;
   }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    cout<<"\n";
	return 0;
}
