/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back
#define ld long double
int solve(int D,int d,int A,int B,int C)
{
	int dd=D*d;
	if(dd<10)
	{
		return 0;
	}
	else if(dd>=10 and dd<21)
	{
		return A;
	}
	else if(dd>=21 and dd<42)
	{
		return B;
	}
	else
	{
		return C;
	}
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)    
    {
    	int D;
    	int d;
    	int A;
    	int B;
    	int C;
    	cin>>D>>d>>A>>B>>C;
    	//D days
    	//d distance
    	//A,B,C prizes
    	cout<<solve(D,d,A,B,C)<<"\n";
    }
	return 0;
}
