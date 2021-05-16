/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back
int p1=1000;//packet p1
int p2=5;  //packet p2
int c1=500;//cost p1
int c2=5; // cost p2
int cc1=2; //cost one ch in p1
int cc2=1;//cost one ch in p2;

ll solve(ll x)
{
    //ll s=0;
   	if(x==0 | x==1 | x==2 | x==3 | x==4)
   	{
   		return 0;
   	}
   	else if(x>=50)
   	{
   	    ll s=0;
   	    ll rr1=x/500;
   	    ll r1=x%500;
   	    s+=rr1*1000;
   	    ll rr2=r1/5;
   	    s+=rr2*5;
   	    return s;
   	}
   	else
   	{
   		ll rr=x/5;
   		//ll r=x%5;
   		return rr*5;
   	}
}

int main()
{
	ll x;
	cin>>x;
	cout<<solve(x)<<'\n';
	return 0;
}
