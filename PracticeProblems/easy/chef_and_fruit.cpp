/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back
#define ld long double

void solve()
{
   int a;
   int b;
   int c;
   cin>>a>>b>>c;
   int d=abs(a-b);
   if(d==0)
   {
   	cout<<0;
   }
   else
   {
   	vector<int>v;
   	for(int i=1;i<=c;++i)
   	{
   		v.pb(abs(d-i));
   	}
   	cout<<*min_element(v.begin(),v.end());
   }
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
