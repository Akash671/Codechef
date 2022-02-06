/*
author    : @akash kumar
institute : MIT Moradabad
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
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

void solve()
{
	int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;++i)
    {
        cin>>nums[i];
    }
    unordered_map<int, bool> mpr;
        
        for(auto x: nums)
        {
            mpr[x] = true;
        }
        
        for(int i = 1; i <= nums.size(); ++i)
        {
            if(mpr.find(i) == mpr.end())
                cout<<i;
                return ;
        }
        cout<<nums.size() + 1;
}
//1 3 4 5
//
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
