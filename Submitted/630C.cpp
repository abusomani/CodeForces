#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int n;
	cin>>n;
	ll ans = 1;
	
	for(int i=0;i<=n;i++)
	ans <<= 1;
	
	ans -= 2;
	cout<<ans;
}

