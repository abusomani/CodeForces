#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin>>N;
	int arr[N];
	
	for(int i=0;i<N;i++)cin>>arr[i];
	
	int curr_min = arr[0], curr_max = arr[0];
	int ans = 0;
	
	for(int i=0;i<N;i++)
	{
		if(curr_min > arr[i])
		{
			curr_min = arr[i];
			ans++;
		}
		if(curr_max < arr[i])
		{
			curr_max = arr[i];
			ans++;
		}
	}
	
	
	cout<<ans;
}
