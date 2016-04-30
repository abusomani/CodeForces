#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int n,m;
	cin>>n>>m;
	
	char arr[n][m];
	
	for(int i=0;i<n;i+=2)
		{
			
			for(int j=0;j<m;j++)
				{
					arr[i][j]='#';
					
				}
		}
		
	int count=0;	
	for(int i=1;i<n;i+=2)
		{
				if(count%2)
					{
						arr[i][0]='#';
						arr[i][m-1]='.';
					}
				else
					{
						arr[i][m-1]='#';
						arr[i][0]='.';
					}
			for(int j=1;j<m-1;j++)
				arr[i][j]='.';	
			
		count++;
		}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout<<arr[i][j];
		cout<<endl;
	}
	
	return 0;
}
