#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a;
	cin>>n>>m>>a;
	long long ans=0;
	if(n%a)
	ans=(n/a)+1;
	else
	ans=(n/a);
	if(m%a)
	ans*=(m/a)+1;
	else
	ans*=(m/a);
	
	cout<<ans;
	return 0;
}
