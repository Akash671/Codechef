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
   	int i=0;
   	while(n)
   	{
   		int r=n%10;
   		if(i==1 && r==7)
   		{
   			cout<<1<<"\n";
   			break;
   		}
   		else if(i==1 && r!=7)
   		{
   			cout<<0<<"\n";
   			break;
   		}
   		else
   		{
   		    n=n/10;
   			i++;
   		}
   	}
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();    
	return 0;
}
