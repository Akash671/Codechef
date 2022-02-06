/* 
Author    : Akash Kumar
Institute : MIT Moradabad
*/


/* 
problem is:-

*/


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double



void solve()
{
   ll n;
   cin>>n;

   ll a[n];

   for(ll i=0;i<n;++i)
   {
   	cin>>a[i];
   }

   //logic here-----------

   int f=1;
   for(ll i=0;i<n;++i)
   {
    
    ll ans=i+a[0];
   	for(ll ii=1;ii<n;++ii)
   	{
   		ans=ans^(i+a[ii]);
   	}
   	if(ans==0)
   	{
   		cout<<i;
   		f=0;
   		break;
   	}
   }

   //logic here
   if(f)
   {
   	cout<<-1;
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

// time complexity of this algorithm is : T(n)=O()
