/* author : @akash kumar 
   github : https://www.github.com/Akash671
*/

/* 
problem is:-

*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back
#define ld long double
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

template <typename T>
void swp(T &n1, T &n2)
{
	T temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}

//cal by
//myMax<int>(x,y)
//myMax<char>('g','e')

void solve()
{
   	ll N,M;
   	cin>>N>>M;
   	ll a[N];
   	for(ll i=1;i<=N;++i)
   	{
   		cin>>a[i];
   	}
   	ll b[M];
   	for(ll i=1;i<=M;++i)
   	{
   		cin>>b[i];
   	}
   	/* logic here */
   	for(ll i=1;i<=M;++i)
   	{
   		for(ll ii=1;ii<=N;++ii)
   		{
   		   
   		}
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


// time complexity is :- T(n)=O()
