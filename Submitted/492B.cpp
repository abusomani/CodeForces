#include <bits/stdc++.h>
using namespace std;

double max(int a, int b)
{
	return(a>b)?a:b;
}

int main()
{
	int N,L;
	cin>>N>>L;
	
	int arr[N];
	
	for(int i=0; i<N; i++)cin>>arr[i];
	
	sort(arr,arr+N);
	
	double mx = -1;
	
	for(int i=0; i<N-1; i++)
	{
		mx = max(mx,(arr[i+1]-arr[i]));
	}
	mx /= 2;
	mx = max(mx,max((arr[0]-0),(L-arr[N-1])));
	std::cout << std::fixed;
    std::cout << std::setprecision(9);
	cout<<mx;
	
	
	
	
}
