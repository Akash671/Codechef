/* author akash kumar  */
#include<iostream>
using namespace std;

int solve(int n,int m)
{
	int a;
	a=n%m;
	return a;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		cout<<solve(n,m)<<endl;
	}
}
