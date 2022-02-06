#include<iostream>
using namespace std;

void solve()
{
	string s;
	cin>>s;

	//logic here
	int a=0;
	int b=0;

	int n=s.size();


	for(int i=0;i<n;++i)
	{
		if(s[i]=='a')
		{
			a++;
		}
		else
		{
			b++;
		}
	}
	//logic here
	if(a>b)
	{
		cout<<b;
	}
	else
	{
		cout<<a;
	}
}

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		solve();
		cout<<"\n";
	}

	return  0;
}