#include<bits/stdc++.h>
using namespace std;

int main() 
{
	long long arr[26] = {0};
	long long N,k;
	cin>>N>>k;
		
	char c;
	
	for(long long i=0;i<N;i++)
	{
		cin>>c;
		arr[(c-'A')]++;
	}
	
	sort(arr,arr+26);
	long long ans = 0;
	
	for(int i=25; i>=0; i--)
	{
		if(arr[i] <= k)
		{
			k -= arr[i];
			ans += arr[i]*arr[i];
		}
		else
		{
			ans += k*k;
			k = 0;
		}
		if(k <= 0)break;
	}
	
	cout<<ans;
	
	return 0;
		
}
