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
   int N;
   int D;
   int H;
   int RED=0;
   cin>>N>>D>>H;
   int A[N];
   for(int i=0;i<N;++i)
   {
   	cin>>A[i];
   }

   int water=0;
   for(int i=0;i<N;++i)
   {
   	if(A[i]>0)
   	{
   		water+=A[i];
   		if(water>H)
   		{
   			RED=1;
   			break;
   		}
   	}
   	if(A[i]==0)
   	{
   		if(water<D)
   		{
   			water=0;
   		}
   		else
   		{
   			water-=D;
   		}
   	}
   }
   if(RED)
   {
   	cout<<"YES";
   }
   else
   {
   	cout<<"NO";
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
