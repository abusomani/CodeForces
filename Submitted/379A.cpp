#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	
	int ans = a , residual = 0;
	
	while(a >= b)
	{
		ans += a/b;
		residual = a%b;
		a = a/b + residual;
	}
	
	cout<<ans;
}
