/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back
#define ld long double

void solve()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;++i)	
   {
   	cin>>a[i];
   }
   for(int i=0;i<n;++i)
   {
   	cout<<a[n-i-1]<<" ";
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
