/* author : @akash kumar */


#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back
//time complexity is T(n)=O(n*n)
void solve(int n,int a[],int m)
{
    int F=1;
	for(int i=0;i<n-1;++i)
	{
		for(int ii=i+1;ii<n;++ii)
		{
			if(a[i]+a[ii]==m)
			{
				cout<<"("<<a[i]<<" "<<a[ii]<<")";
				F=0;
			}
		}
	}
	if(F)
    	cout<<"not found";
}

// time complexity T(n)=O(nlongn)
void solve1(int n,int a[],int m)
{
	sort(a,a+n);
	int low=0;
	int high=n-1;
	int F=1;
	while(low<high)
	{
		if(a[low]+a[high]==m)
		{
			cout<<"("<<a[low]<<" "<<a[high]<<")";
			F=0;
		}
		if(a[low]+a[high]<m)
		{
			low++;
		}
		else
		{
			high--;
		}
	}
	if(F)
	    cout<<"Not found";
}

//time complexity T(n)=O(n)
//using hashing method

void solve2(int n,int a[],int m)
{
	unordered_map<int,int>map;
	int F=1;
	for(int i=0;i<n;++i)
	{
		if(map.find(m-a[i])!=map.end())
		{
			cout<<"("<<a[map[m-a[i]]]<<","<<a[i]<<")";
			F=0;
		}
		map[a[i]]=i;
	}
	if(F)
	  cout<<"Not found";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;++i)
    	{
    		cin>>a[i];
    	}
    	int m;
    	cin>>m;
    	solve2(n,a,m);
    	cout<<"\n";
    }
	return 0;
}
