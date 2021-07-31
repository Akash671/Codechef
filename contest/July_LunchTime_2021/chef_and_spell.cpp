/* author : @akash */


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
   ll a,b,c;
   cin>>a>>b>>c;
   if(a+b>=b+c && a+b>=a+c)
   {
   	cout<<a+b;
   }
   else if(a+c>=a+b && a+c>=b+c)
   {
   	cout<<a+c;
   }
   else
   {
   	cout<<b+c;
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
