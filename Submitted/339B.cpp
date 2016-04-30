#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
	int N , M;
	cin>>N>>M;
	
	int arr[M];
	
	for(int i=0;i<M;i++)
		cin>>arr[i];
	
	ll time = (arr[0]-1), lst_task = arr[0];
	
	for(int i=1; i<M;)
	{
		while((arr[i] == lst_task) and (i < M))
			i++;
		
		if(i >= M) break;
		
		if(arr[i] > lst_task)
		{
			time += (arr[i] - lst_task);	
		}
		
		else
		{
			time += (N-lst_task+arr[i]);
		}
		
		lst_task = arr[i];
		i++;
	}
	
	cout<<time;
	
	return 0;
}
