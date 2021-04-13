/* auhtor : @akash kumar */

#include<bits/stdc++.h>
using namespace std;

long int solve(long long int n,long long int a[])
{
	/* logic here */
	//5 5 5 5 5 8 8 8
	int c=0;
	sort(a,a+n);
	long long int s=0;
	for(int i=0;i<n;)
	{
	    long long int temp=a[i];
	    if(i+4<=n && a[i]==a[i+4])
	    {
	       i+=5; 
	    }
	    else
	    {
	        return temp+temp+temp;
	    }
	}
	return c;

}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int a[n];
		for(long long int i=0;i<n;++i)
		{
			cin>>a[i];
		}
		cout<<solve(n,a)<<endl;
	}
}

