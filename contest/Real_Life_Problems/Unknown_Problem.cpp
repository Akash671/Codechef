/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(float a,float b)
{
	//cout<<double(a+b)<<endl;
	printf("%.1f",a+b);
	cout<<endl;
	printf("%.1f",a-b);
	cout<<endl;
	printf("%.1f",a*b);
	cout<<endl;
	printf("%.1f",a/b);
	cout<<endl;
	
}

int main()
{
	float a,b;
	cin>>a>>b;
	solve(a,b);
	return 0;
}
