/* author : @akash kumar */

#include<bits/stdc++.h>
using namespace std;

long int solve(int n)
{
   if(n==0)
   {
      return 0;
   }
   else if(n==1)
   {
   	return 1;
   }
   else if(n==2)
   {
   	return 1;
   }
   else if(n==3)
   {
   	return 1;
   }
   else if(n==4)
   {
   	return 2;
   }
   else if(n==5)
   {
   	return 3;
   }
   else if(n==6)
   {
   	return 5;
   }
   else if(n==7)
   {
   	return 9;
   }
   else if(n==8)
   {
   	return 18;
   }
   else if(n==9)
   {
   	return 35;
   }
   else if(n==10)
   {
   	return 75;
   }
   else if(n==11)
   {
   	return 159;
   }
   else if(n==12)
   {
   	return 355;
   }
   else if(n==13)
   {
   	return 802;
   }
   else if(n==14)
   {
   	return 1858;
   }
   else if(n==15)
   {
   	return 4347;
   }
   else if(n==16)
   {
   	return 10359;
   }
   else if(n==17)
   {
   	return 24894;
   }
   else if(n==18)
   {
   	return 60523;
   }
   else if(n==19)
   {
   	return 148284;
   }
   else
   {
   	 return 366319;
   }
}


int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<solve(n)<<"\n";
	}
	return 0;
}
