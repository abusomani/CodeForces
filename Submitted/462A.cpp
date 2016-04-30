#include<bits/stdc++.h>
using namespace std;
 
 
int main() 
{
	int N;
	cin>>N;
		
	char arr[N][N];
	int  a[N][N];
	
	for(int i=0;i<N;i++)
	for(int j=0;j<N;j++)
	{
		cin>>arr[i][j];
		a[i][j] = 0;
	}
	
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			if((i-1) >=0 and arr[i-1][j] == 'o')a[i][j]++;
			if((j-1) >=0 and arr[i][j-1] == 'o')a[i][j]++;
			if((i+1) < N and arr[i+1][j] == 'o')a[i][j]++;
			if((j+1) < N and arr[i][j+1] == 'o')a[i][j]++;
			
			if(a[i][j] % 2 != 0)
			{
				cout<<"NO";
				return 0;
			}
		}

	}
	
	cout<<"YES";
	return 0;
		
}
