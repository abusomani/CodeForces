#include <bits/stdc++.h>
using namespace std;

bool left_ab(int dp[], int L)
{
	bool ab = false , ba = false;
	int j;
	for(j = 0; j < L and (ab == false); j++)
	{
		if(dp[j] == 1 and dp[j+1] == 2)
		 ab = true;
	}
	j ++;
	for(; j < L and (ba == false); j++)
	{
		if(dp[j] == 2 and dp[j+1] == 1)
		ba = true;
	}
	
	return (ab and ba);
}

bool left_ba(int dp[],int L)
{
	bool ab = false , ba = false;
	int j;
	for(j = 0; j < L and (ba == false); j++)
	{
		if(dp[j] == 2 and dp[j+1] == 1)
		 ba = true;
	}
	j ++;
	for(; j < L and (ab == false); j++)
	{
		if(dp[j] == 1 and dp[j+1] == 2)
		ab = true;
	}
	
	return (ab and ba);
}

int main()
{
	string s;
	cin>>s;
	
	int dp[s.size() - 1];
	memset(dp,0,sizeof(dp));
	
	for(int i=0; i<s.size(); i++)
	{
		if(s[i] == 'A')
		dp[i] = 1;
		else if(s[i] == 'B')
		dp[i] = 2;
	}

	if((left_ab(dp,s.size()-1) or left_ba(dp,s.size()-1)))
		cout<<"YES\n";
	else
		cout<<"NO\n";
	
	return 0;
}
