/* author : @akash kumar */

#include<iostream>
using namespace std;

void solve(int NO_OF_PEOPLES,int ATM_AMOUNT,int PEOPLES_MONEY[])
{
	/* logic here */
	for(int i=0;i<NO_OF_PEOPLES;++i)
	{
		if(ATM_AMOUNT>=PEOPLES_MONEY[i])
		{
			ATM_AMOUNT-=PEOPLES_MONEY[i]; // withdraw money from ATM
			cout<<1;
		}
		else
		{
			cout<<0;
		}
	}

}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int NO_OF_PEOPLES,ATM_AMOUNT;
		cin>>NO_OF_PEOPLES>>ATM_AMOUNT;
		int PEOPLES_MONEY[NO_OF_PEOPLES];
		for(int i=0;i<NO_OF_PEOPLES;++i)
		{
			cin>>PEOPLES_MONEY[i];
		}
		solve(NO_OF_PEOPLES,ATM_AMOUNT,PEOPLES_MONEY);
		cout<<endl;
	}
	return 0;
}

