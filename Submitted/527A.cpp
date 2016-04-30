#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll ans = 0;

void squares(ll a, ll b)
{
	if(a == 0|| b == 0) return;
	
	else
	{
		if(a < b)
		{
			ans += (b/a);
			b = b%a;
		}
		else
		{
			ans += (a/b);
			a = a%b;
		}
		squares(a,b);
	}
}


int main()
{
	ll a,b;
	cin>>a>>b;
	squares(a,b);
	cout<<ans;
	
}
