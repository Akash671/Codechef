#include<bits/stdc++.h>
using namespace std;


void solve(){
	int c1=0;
	int c2=0;


	char a,b,c;
	cin>>a>>b>>c;

	char p,q;
	cin>>p>>q;

	if(p==a){
		cout<<p;
	}
	else if(q==a){
		cout<<q;
	}
	else if(p==c){
		cout<<q;
	}
	else if(q==c){
		cout<<p;
	}
	else if(p==b && q==c){
		cout<<p;
	}
	else if(p==c && q==b){
		cout<<q;
	}
	//C B A
	//A B
	
}

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		solve();
		cout<<"\n";
	}
	return 0;
}
