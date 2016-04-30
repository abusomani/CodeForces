#include<bits/stdc++.h>
using namespace std;

int main()
{
	char init[102],final[102];
	cin>>init;
	cin>>final;
	

	
	if(strcmp(init,strrev(final))==0)
		cout<<"YES";
	else
		cout<<"NO";
	
	
	
	return 0;
}
