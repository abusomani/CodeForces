#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int N;
	cin>>N;

	int arr[N];
	int s = 0;
	
	for(int i=0; i<N; i++)
	{
		cin>>arr[i];
		s += arr[i];
	}
	
	int c = 0;
	if((s+1)%(N+1) != 1)
	c++;
	if((s+2)%(N+1) != 1)
	c++;
	if((s+3)%(N+1) != 1)
	c++;
	if((s+4)%(N+1) != 1)
	c++;
	if((s+5)%(N+1) != 1)
	c++;
	
	cout<<c;
	return 0;
}


