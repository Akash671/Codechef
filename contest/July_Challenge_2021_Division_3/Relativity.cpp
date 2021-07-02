/* author : @akash */


/* 
problem is:-

*/


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define ld long double


ll power(ll base , ll n)
{
	// initialize ans = 1;
	ll ans = 1;
	while(n>0)
	{
		// whenever power is odd , club it with the ans
		if(n%2)ans = (ans*base)%MOD;
 
		base = (base * base)%MOD; // make base square each time
 
		n>>=1;  // each time divide the power by 2
	}
	return ans;
}


void solve()
{
   ll g,c;
   cin>>g>>c;
   ll pp=power(c,2);
   cout<<pp/(2*g);
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
	        //clock_t tStart = clock();
            solve();
            cout<<"\n";	
            //printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);                
	}
	return 0;
}

// time complexity is :- T(n)=O()
