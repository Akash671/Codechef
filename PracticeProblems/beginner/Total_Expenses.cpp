/* author : @akash kumar */

#include<bits/stdc++.h>
using namespace std;

void solve(long int Q,long int P)
{
	double r;
	if(Q>1000)
	{
		r=Q*P-(Q*P*10)/100;
		printf("%.6f",r);
		cout<<endl;
	}
	else
	{
		r=Q*P;
		//cout.fill('.');
		//cout.width(6);
		printf("%.6f",r);
		cout<<endl;
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			long int q,p;
			cin>>q>>p;
		        solve(q,p);
		}
	return 0;
}
