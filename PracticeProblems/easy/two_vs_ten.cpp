/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back
#define ld long double

void solve()
{
   ll x;
   cin>>x;
   if(x==10)	
   {
   	cout<<0;
   }
   else
   {
   ll c=0;
   	if(x%5==0)
   	{
   		while(1)
   		{
   			x=x*2;
   			c++;
   			if(x%10==0)
   			{
   			    cout<<c;
   				break;
   			}
   		}
   	}
   	else
   	{
   		cout<<-1;
   	}
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
