/**   author akash kumar template  **/

#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

//typedef long long int ll;

void solve(int n,int h,int x,int t[])
{
    int c=0;
    for(int i=0;i<n;i++)
    {
	if(x+t[i]==h)
	{
	    c=1;
	    break;
	}
    }
    if(c==1)
    {
	cout<<"YES";
    }
    else
    {
	cout<<"NO";
    }
    
}

int main()
{
   //int t;
   //cin>>t;
   //while(t--)
   //{
       int n,h,x;
       cin>>n>>h>>x;
       int t[n];
       for(int i=0;i<n;i++)
       {
	   cin>>t[i];
       }
       
       solve(n,h,x,t);
       cout<<endl;
  // }
   return 0;
}
