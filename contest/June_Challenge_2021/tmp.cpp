#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
 
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
 
int main()
{
	ll base =3;
	ll n = 2;
	cout<<power(base,n);
}
