#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100005

ll dp[MAX];

int main()
{
	
	memset(dp,0,MAX);
	int N,x;
	cin>>N;
	
	for(int i=0; i<N; i++)
	{
		cin>>x;
		dp[x]++;
	}
	
	for(int i=0; i<MAX; i++)
		dp[i] = i*dp[i];
		
	
	for(int i=2; i<MAX; i++)
		dp[i] = max(dp[i-1],dp[i]+dp[i-2]);
	
	cout<<dp[MAX-1];
}
