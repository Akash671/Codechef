/* author akash kumar */

#include<bits/stdc++.h>
using namespace std;

int solve(int n)
{
	/* logic here  */
	int x;
	x=sqrt(n);
	return x;

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
}

