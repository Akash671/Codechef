/* author : @akash kumar */

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back

bool solve(int n,int a[])
{
   unordered_set<int>set;//
   set.insert(0);
   int sum=0;
   for(int i=0;i<n;++i)
   {
   	sum+=a[i];
   	if(set.find(sum)!=set.end())
   	{
   		return true;
   	}
   	else
   	{
   		set.insert(sum);
   	}
   }
   return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)		
    {
    	int n;
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;++i)
    	{
    		cin>>a[i];
    	}
    	if(solve(n,a))
    	{
    		cout<<"exits"<<"\n";
    	}
    	else
    	{
    		cout<<"not exits"<<"\n";
    	}
    }
	return 0;
}
