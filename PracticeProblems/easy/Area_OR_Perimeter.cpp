/* author : @akash */

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double


void solve()
{
   int L,B;
   cin>>L;
   cin>>B;
   int area=L*B;
   int peri=2*(L+B);
   if(area>peri)
   {
   	cout<<"Area"<<"\n";
   	cout<<max(area,peri);
   }
   else
   {
   		cout<<"Peri"<<"\n";
     	cout<<max(area,peri);
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
