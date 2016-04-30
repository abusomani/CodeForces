#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	int N;
	cin>>N;
	
	int arr[N];
	for(int i=0; i<N; i++) cin>>arr[i];
	
	sort(arr,arr+N);
	int mn , mx;
	for(int i=0; i<N; i++)
	{
		mn = INT_MAX; mx = INT_MIN;
		
		if(i == 0)
		{
			mn = abs(arr[i+1] - arr[0]);
			mx = abs(arr[N-1] - arr[0]);
		}
		
		else if(i == N-1)
		{
			mn = abs(arr[i]- arr[i-1]);
			mx = abs(arr[N-1] - arr[0]);
		}
		
		else
		{
			mn = min(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1]));
			mx = max(abs(arr[i]-arr[0]),abs(arr[i]-arr[N-1]));
		}
		
		cout<<mn<<" "<<mx<<endl;
	}
	
	return 0;
}

