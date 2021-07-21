/* author : @akash */


/* 
problem is:-
Chef is interested in the history of SnackDown contests. He needs a program to verify if SnackDown was hosted in a given year.

SnackDown was hosted by CodeChef in the following years: 2010, 2015, 2016, 2017 and 2019.
Input

The first line contain the number of test-cases T

.

The first line of each test-case contains a single integer N

.
Output

For each test case print a single line containing the string "HOSTED" if SnackDown was hosted in year N

or "NOT HOSTED" otherwise (without quotes).
Constraints

    1≤T≤10

2010≤N≤2019

Example Input

2
2019
2018

Example Output

HOSTED
NOT HOSTED


*/


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double


void solve()
{
  int n;
  cin>>n;
  if(n==2010 || n==2015 || n==2016 || n==2017 || n==2019)
  {
  	cout<<"HOSTED";
  }
  else
  {
  	cout<<"NOT HOSTED";
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
            solve();
            cout<<"\n";	    
	}
	return 0;
}

// time complexity of this algorithm is : T(n)=O()
