#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin>>n;
   vector<int>a(n);

   for(int i=0;i<n;++i)
   {
   	cin>>a[i];
   }

   int m=*max_element(a.begin(),a.end());
   int ans[m+1];

   for(int i=0;i<m+1;++i)
   {
   	ans[i]=0;
   }

   for(int i=0;i<n;++i)
   {
   	ans[a[i]]+=1;
   }

   int c=0;
   for(int i=0;i<n;++i)
   {
   	if(ans[i]%2!=0)
   	{
   		c++;
   	}
   }
   cout<<c;
}

int main()
{
	solve();
	return 0;
}
