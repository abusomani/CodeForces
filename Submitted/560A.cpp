#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin>>N;
	
	int arr[N];bool one = false;
	for(int i=0; i<N; i++)
	{
		cin>>arr[i];
		if(arr[i] == 1) one = true;	
	}
	
	if(one)cout<<"-1";
	else
	cout<<"1";
		
}

