#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll pre[10][10];

void precompute()
{
	for(int i=0;i<10;i++)
	{
		pre[i][0] = 1;
		pre[0][i] = 1;
	}
	
	for(int i=1;i<10;i++)
	{
		for(int j=1;j<10;j++)
		{
			pre[i][j] = pre[i-1][j] + pre[i][j-1];
		}
	}
	
}

int main()
{
	precompute();
	int N;
	cin>>N;
	cout<<pre[N-1][N-1];
}
