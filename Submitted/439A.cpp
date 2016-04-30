#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int n,d;
	cin>>n>>d;
	
	int arr[n];
	int s = 0 , j = 0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		s += arr[i];
		if(i != (n-1))
		{
			s += 10;
			j += 2;
		}
	}
	if(s==d)
	cout<<j;
	else if(s > d)
	cout<<-1;
	else
	{
		d = d-s;
		j += d/5;
		cout<<j;
	}
	
}
