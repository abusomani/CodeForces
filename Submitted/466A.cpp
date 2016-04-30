#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N,m,a,b;
	cin>>N>>m>>a>>b;
	
	int dp[N+1];
	dp[0] = 0; // 0 rides
	
	for(int i=1;i<=N;i++)
	{
		if((i-m) > 0)
		dp[i] =  min(dp[i-m] + b, dp[i-1] + a); // either give 'a' and travel one time else 'b' and travel for m times
		else
		dp[i] = min(dp[i-1] + a, dp[0] + b); 
	}
	cout<<dp[N];
	
	
	return 0;
}
