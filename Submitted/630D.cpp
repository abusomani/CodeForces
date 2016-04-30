#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin>>n;
	ll ans=((n+1)*(n+2))/2;
	ans-=1;
	ans=ans*6;
	ans=ans-6*n;
	ans++;
	cout<<ans;
	return 0;
}


