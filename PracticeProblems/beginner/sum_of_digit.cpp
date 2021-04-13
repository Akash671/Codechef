/* author akash kumar */

#include<iostream>
using namespace std;

int solve(int n)
{
	int s=0;
	//int N=n;
	while(n>0)
	{
		int r=n%10;
		s+=r;
		n=n/10;
	}
	return s;

}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<solve(n)<<endl;
	}
	return 0;
}
