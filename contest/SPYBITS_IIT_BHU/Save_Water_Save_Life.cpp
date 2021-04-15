/* author : @akash kumar */

#include<iostream>
using namespace std;

string solve(int H,int x,int y,int C)
{
	int d=x+y/2;
	d=d*H;
	if(d<=C)
	{
		return "YES";
	}
	else
	{
		return "NO";
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int H,x,y,C;
		cin>>H>>x>>y>>C;
		cout<<solve(H,x,y,C)<<"\n";
	}
	return 0;
}
