#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N , T;
	cin>>N>>T;
	
	int arr[N+1];
	
	for(int i = 1 ;i < N; i++)
		cin>>arr[i];
		
	
	int start = 1;
	
	while(start <= N)
	{
		if(start == T)
		{
			cout<<"YES";
			return 0;	
		}	
		start = start + arr[start];
	}	
	
	cout<<"NO";
	
	return 0;
}
