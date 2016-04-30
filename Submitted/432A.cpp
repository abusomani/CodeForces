#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int n,k;
	cin>>n>>k;
	
	int arr[n];
	int c = 0;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		int v = (5-arr[i])/k;
		if(v > 0) 	c++;
	}
	
	c /= 3;
	cout<<c;
}
