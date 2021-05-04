/* author : @akash kumar */

#include<bits/stdc++.h>
using namespace std;

int solve(int h,float c,int tt)
{
	if(h>50 && c<0.7 && tt>5600)
	{
		return 10;
	}
	else if(h>50 && c<0.7)
	{
		return 9;
	}
	else if(c<0.7 && tt>5600)
	{
		return 8;
	}
	else if(h>50 && tt>5600)
	{
		return 7;
	}
	else if(h>50 | c<0.7 | tt>5600)
	{
		return 6;
	}
	else
	{
		return 5;
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			int h;
			float c;
			int tt;
			cin>>h>>c>>tt;
			cout<<solve(h,c,tt)<<endl;
		}
	return 0;
}
