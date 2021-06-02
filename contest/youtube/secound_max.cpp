/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back
#define ld long double

void solve()
{
   int a,b,c;
   cin>>a>>b>>c;
   //2 7 2
   vector<int>v(3);
   v.pb(a);
   v.pb(b);
   v.pb(c);
   int mx=max(a,b);
   mx=max(mx,c);
   if(mx==a)
   {
   	v[0]=-1;
   }
   if(mx==b)
   {
   	v[1]=-1;
   }
   if(mx==c)
   {
   	v[2]=-1;
   }
   int ans=max(v[0],v[1]);
   ans=max(ans,v[2]);
   cout<<ans;
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
