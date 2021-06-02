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
   int d;
   cin>>a>>b>>c>>d;
   if(a==b && c==d)	
   {
   	cout<<"YES";
   }
   else if(a==c && b==d)
   {
   	cout<<"YES";
   }
   else if(a==d && b==c)
   {
   	cout<<"YES";
   }
   else
   {
   	cout<<"NO";
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
