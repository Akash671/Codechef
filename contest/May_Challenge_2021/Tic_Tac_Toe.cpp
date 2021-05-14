/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;	
	while(t--)
	{
		char a[3][3];
		int cx=0,co=0,c_=0;
		int wx=0,wo=0;
		for(int i=0;i<3;++i)
		{
			for(int j=0;j<3;++j)
			{
				cin>>a[i][j];
				if(a[i][j]=='X')
				{
					cx++;
				}
				if(a[i][j]=='O')
				{
					co++;
				}
				if(a[i][j]=='_')
				{
					c_++;
				}
			}
		}
		for(int i=0;i<3;++i)
		{
			if(a[i][0]==a[i][1] and a[i][2]==a[i][1])
			{
				if(a[i][0]=='X')
				{
					wx++;
				}
				if(a[i][0]=='O')
				{
					wo++;
				}
			}
		}
		for(int i=0;i<3;++i)
		{
			if(a[0][i]==a[1][i] and a[2][i]==a[1][i])
			{
				if(a[0][i]=='X')
				{
					wx++;
				}
				if(a[0][i]=='O')
				{
					wo++;
				}
			}
		}
		if(a[0][0]==a[1][1] and a[2][2]==a[1][1])
		{
			if(a[1][1]=='X')
			{
				wx++;
			}
			if(a[1][1]=='O')
			{
				wo++;
			}
		}
		if(a[0][2]==a[1][1] and a[2][0]==a[1][1])
		{
			if(a[1][1]=='X')
			{
				wx++;
			}
			if(a[1][1]=='O')
			{
				wo++;
			}
		}
	     if(co>cx)
		{
			cout<<3<<endl;
		}
		else if(cx-co>1)
		{
			cout<<3<<endl;
		}
		else if(cx>co and wx==1 and wo==0)
		{
			cout<<1<<endl;
		}
		else if(c_==0 and wx+wo==0)
		{
			cout<<1<<endl;
		}
		else if(c_==0 and wx==2)
		{
			cout<<1<<endl;
		}
		else if(c_>0 and wx+wo==0)
		{
			cout<<2<<endl;
		}
		else
		{
			cout<<3<<endl;
		}
	}
	return 0;
}
