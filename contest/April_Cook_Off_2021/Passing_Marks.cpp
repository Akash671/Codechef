/* author : @akash kumar */

#include<bits/stdc++.h>
using namespace std;

string solve(int a,int b,int c,int T,int A,int B,int C)
{
	if(A>=a && B>=b & C>=c)
	{
		int s=A+B+C;
		if(s>=T)
		{
			return "YES";
		}
	}
	return "NO";
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,T,A,B,C;
		cin>>a>>b>>c>>T>>A>>B>>C;
		cout<<solve(a,b,c,T,A,B,C)<<"\n";
	}
	return 0;
}
