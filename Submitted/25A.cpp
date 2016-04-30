#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin>>N;
	
	int arr[N];
	for(int i=0; i <N;i++) cin>>arr[i];
	
	int e = 0, o = 0;
	
	for(int i=0; i <N;i++)
	{
		if(arr[i]%2 == 0)
			e++;
		else 
			o++;
	}
	
	if(e == 1)
	{
		for(int i=0; i <N;i++)
			if(arr[i]%2 == 0)
			cout<<(i+1);
	}
	
	else
	{
		for(int i=0; i <N;i++)
			if(arr[i]%2 != 0)
			cout<<(i+1);
	}
	
}
