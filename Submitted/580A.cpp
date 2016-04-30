#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int arr[n];
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	int c=1,m=-1;
	for(int i=1;i<n;i++)
		{
			if(arr[i]>=arr[i-1]) c++;
			
			else
			{
			
			if(m<c)m=c;	
			c=1;
			}	
		}
	if(m<c)m=c;
	
	cout<<m;
	return 0;
}
