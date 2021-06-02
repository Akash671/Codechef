/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back
#define ld long double

void solve()
{
   int L,R;
   cin>>L>>R;
   for(int i=L;i<=R;++i)	
   {
   	if(i%2!=0)
   	{
   		cout<<i<<" ";
   	}
   }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    cout<<"\n";
	return 0;
}
