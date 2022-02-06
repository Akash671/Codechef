/*
author    : @akash kumar
institute : MIT Moradabad
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
#define pb push_back
#define ld long double
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
#define prDouble(x) cout<<fixed<<setprecision(10)<<x //to print decimal numbers
#define For(n) for(ll i = 0; i<n; i++)
#define FOR(a,b) for(ll i = a; i<=b; i++)

void solve()
{
   ll a[3];
   //ll ans[3];
   //for(int i=0;i<3;++i)
   //{
   	cin>>a[0]>>a[1]>>a[2];
   //}
   ll m=*max_element(a,a+3);
   int ii=0;
   For(3)
   {
   	if(a[i]==m)
   	{
   		ii=i;
   		break;
   	}
   }
//   cout<<m;
   //logic here
   //4 5 5
   //4=5-4+1=5
   //5=5-5+1=1
   //5=5-5+1=1
   
   //5 1 1
   //0 0 4
   //
    if(a[0]==a[1] && a[1]==a[2])
   {
   	cout<<1<<" "<<1<<" "<<1;
   }
   else
   {
   	if(a[0]>a[1] && a[0]>a[2])
   	{
   		a[1]=a[0]-a[1]+1;
   		a[2]=a[0]-a[2]+1;
   		a[0]=0;
   	}
   	else if((a[0]==a[1] || a[0]==a[2]) && (a[0]<m))
   	{
   		a[0]=m-a[0]+1;
   		if(a[2]>a[1]){
   			a[2]=0;
   			//0 0 4
   			a[1]=m-a[1]+1;
   		}
   		else{
   			a[1]=0;
   			//0 0 4
   			a[2]=m-a[2]+1;
   		}
   		
   	}
   	//5 5 4
   	//
   	else if((a[0]==a[1] || a[0]==a[2]) && (a[0]==m))
   	   	{
   	   		a[1]=m-a[1]+1;
   	   		a[2]=m-a[2]+1;
   	   		a[0]=1;
   	   	}
   	else if(a[1]>a[0] && a[1]>a[2])
   	{
   		a[0]=a[1]-a[0]+1;
   		a[2]=a[1]-a[2]+1;
   		//a[1]=0;
   		a[1]=0;
   	}
   	else if((a[1]==a[0] || a[1]==a[2]) && (a[1]<m))
   	   	{
   	   		a[1]=m-a[1]+1;
   	   		if(a[2]>a[0]){
   	   			a[2]=0;
   	   			a[1]=m-a[1]+1;
   	   		}
   	   		else{
   	   			a[2]=m-a[2]+1;
   	   			   	   		//a[1]=0;
   	   			   	   		a[1]=0;
   	   		}
   	   		
   	   	}
   	   	//4 5 5
   	else if((a[1]==a[0] || a[1]==a[2]) && (a[1]==m))
   	{
   		a[0]=m-a[0]+1;
   		a[2]=m-a[2]+1;
   		//a[1]=0;
   		a[1]=1;
   	}
   	else if(a[2]>a[0] && a[2]>a[1])
   	{
   		a[0]=a[2]-a[0]+1;
   		a[1]=a[2]-a[1]+1;
   		//a[2]=0;
   		a[2]=0;
   	}
   	else if((a[2]==a[0] || a[2]==a[1]) && (a[2]<m))
   	{
   		//a[0]=m-a[0]+1;
   		a[2]=m-a[2]+1;
   		//a[2]=0;
   		if(a[1]>a[0]){
   			a[1]=0;
   			a[0]=m-a[0]+1;
   		}
   		else{
   		a[0]=0;
   		a[1]=m-a[1]+1;	
   		}
   		//a[0]=0;
   	}
    else if((a[2]==a[0] || a[2]==a[1]) && (a[2]==m))
       	{
       		a[0]=m-a[0]+1;
       		a[1]=m-a[1]+1;
       		//a[2]=0;
       		a[2]=1;
       	}
   else
   {
   	int i=0;
   }
   	cout<<a[0]<<" "<<a[1]<<" "<<a[2];
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
	   cout<<'\n';
	}
	return 0;
}
