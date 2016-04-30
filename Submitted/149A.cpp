#include <bits/stdc++.h>
using namespace std;

int main() {
	int K;
	cin>>K;
	
	int arr[12];
	for(int i=0; i <12; i++)
	cin>>arr[i];
	
	sort(arr,arr+12);
	
	int minMonths = 0,count = 0;
	int month = 11;
	
	while(minMonths < K and month >=0)
	{
		minMonths += arr[month];
		count++;
		month--;
	}
	
	if(minMonths >= K)
	cout<<count;
	
	else
	cout<<-1;
}
