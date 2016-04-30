#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin>>N;
	int arr[N];
	
	for(int i=0; i<N; i++)
		cin>>arr[i];
		
	int cnt[5] = {0};
	
	for(int i=0;i<N;i++)
		cnt[arr[i]]++;
		
	int ans = 0;
	
	ans += cnt[4]; //4 memebers direct add
	cnt[4] = 0;
	
	ans += cnt[2]/2; //2 members half
	cnt[2] = cnt[2]%2;
	
	
	// cout<<ans<<endl;
	if(cnt[1] >= cnt[3])
	{
		ans += cnt[3];
		cnt[1] -= cnt[3];
		cnt[3] = 0;
		
		if(cnt[2] > 0)
		{
			ans += cnt[2];
			cnt[2]=0;
			cnt[1] -= 2;
		}
		
		if(cnt[1] > 0)
		{
			ans += (ceil)((float)cnt[1]/4);
		}
	}
	
	else
	{
		ans += cnt[1];
		cnt[3] -= cnt[1];
		cnt[1] = 0;
		ans += cnt[2];
		ans += cnt[3];
	}
	
	cout<<ans;
	
	return 0;
}

