#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int N;
	cin>>N;
	
	int s = 0, ans;
	int arr[N];
	
	for(int i=0; i<7; i++)
	{
		cin>>arr[i];
	}
	
	int i = -1;
	while(s < N)
	{
		i = (i+1)%7;
		s += arr[i];
	}
	
	cout<<(i+1);
	return 0;
}


