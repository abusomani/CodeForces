#include <bits/stdc++.h>
using namespace std;

long long min(long long a, long long b)
{
	return (a<b)?a:b;
}

int main()
{
	int N;
	cin>>N;
	
	int a[N],p[N];
	
	for(int i=0; i<N; i++)
	{
		cin>>a[i]>>p[i];
	}
	
	long long ans = 0;
	long long price = LONG_MAX;
	for (int i=0;i<N;i++)
	{
		price = min(price, p[i]);
	    ans += price * a[i];
	}
	cout<<ans;
}
