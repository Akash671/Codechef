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
   string a,b;
   cin>>a;
   cin>>b;
   int n=a.size();
   int c=0;
   int unc=0;
   for(int i=0;i<n;++i)
   {
   	if(a[i]!='?' && b[i]!='?')
   	{
   		if(a[i]==b[i])
   		{
   			c++;
   		}
   		else
   		{
   			unc++;
   		}
   	}
   }
   cout<<unc<<" "<<n-c;
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
