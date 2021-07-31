/* author : @akash */


/* 
problem is:-
You are given a sequence A1,A2,…,AN. An ordered pair of indices (i,j) in this sequence is called a beautiful pair if i≠j and Ai−AjAi<Ai−AjAj. (Here, division represents real division, e.g. 52 is equal to 2.50

.)

Help Chef find the number of beautiful pairs present in the given sequence.

Note: Since the input is large, prefer using fast input methods.
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
   float a[n];
   for(int i=0;i<n;++i)
   {
   	cin>>a[i];
   }
   sort(a,a+n);
   int ans=0;
   for(int i=0;i<n;++i)
   {
   	for(int j=0;j<n;++j)
   	{
   			if(i!=j && a[j]<a[i])
   			{
   			   ans+=1;	
   			}
   	}
   }
   cout<<ans;
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

// time complexity of this algorithm is : T(n)=O(n^2)
