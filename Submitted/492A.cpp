#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

vector<ll> height;
vector<ll> sum;

void precompute()
{
	height.pb(0);
	sum.pb(0);
	height.pb(1);
	sum.pb(1);
	
	for(int i=2; i<10005; i++)
		{
			height.pb(i + height[i-1]);
			sum.pb(sum[i-1]+height[i]);
		}
}

int main()
{
	precompute();
	int N;
	cin>>N;
	
	for(int i=0; i <10005; i++)
	{
		if(sum[i] <= N and sum[i+1] > N)
			{
				cout<<i;
				return 0;
			}
	}
	
}
