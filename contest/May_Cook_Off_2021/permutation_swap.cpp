/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back
#define ld long double

int main()
{
    int t;
    cin>>t;
    while(t--)    
    {
      int n;
      cin>>n;
      int a[n];
      for(int i=1;i<=n;++i)
      {
      	cin>>a[i];
      }
      int p[n];
      for(int i=1;i<=n;++i)
      {
      	cin>>p[i];
      }
      int l;
      int Q;
      cin>>Q;
      int tmp;
      cin>>tmp;
      while(Q--)
      {
      	int b[n];
      	for(int i=1;i<=n;++i)
      	{
      		cin>>b[i];
      	}
      	for(int i=1;i<=n;++i)
      	{
      		if(b[p[i]]==a[i])
      		{
      			for(int j=1;j<=n;++j)
      			{
      				int tm=a[j];
      				a[j]=b[j];
      				b[j]=tm;
      			}
      		}
      	}
      	int x,y;
      	cin>>x>>y;
      	int t=a[x];
      	a[x]=a[y];
      	a[y]=t;
      	l=y;
      }
      cout<<a[l]<<"\n";
    }
	return 0;
}
