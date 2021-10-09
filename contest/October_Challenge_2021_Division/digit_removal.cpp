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
   ll n;
   int d;
   cin>>n>>d;	
   string str=to_string(n);
   ll len=str.length();

   if(d==0)
   {
   	int ind2=len;

   	for(int i=0;i<len;++i)
   	{
   		if(str[i]=='0')
   		{
   			str[i]='1';
   			ind2=i;
   			break;
   		}
   	}
   	for(int j=ind2+1;j<len;++j)
   	{
   		str[j]='1';
   	}
   }
   else if(d==9)
   {
   	if(str[0]=='9')
   	{
   		for(int i=0;i<len;++i)
   		{
   			str[i]='0';
   		}
   		str='1'+str;
   	}
   	else
   	{
   		int ind=len;
   		for(int i=0;i<len;++i)
   		{
   			if(str[i]=='9')
   			{
   				for(int k=i-1;k>=0;k--)
   				{
   					if(str[k]<='7')
   					{
   						str[k]++;
   						ind=k;
   						//cout<<"yes1";
   						goto cvv;
   					}
   				}
   				for(int i=0;i<len;++i)
   				{
   					str[i]='0';
   					//cout<<"yes2";
   				}
   				str='1'+str;
   				goto fvv;
   			}
   		}
   		cvv:;
   		for(int j=ind+1;j<len;++j)
   		{
   			str[j]='0';
   		}
   		fvv:;
   	}
   }
   else
   {
   	int i=0;
   	for(i=0;i<len;++i)
   	{
   		if((str[i]-48)==d) //str[i]-48 convert string to int
   		{
   			str[i]=str[i]+1;
   			break;
   		}
   	}
   	for(int j=i+1;j<len;j++)
   	{
   		str[j]='0';
   	}
   }
   ll ans=stoll(str);//stoll convet string to long long
   cout<<ans-n;
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
