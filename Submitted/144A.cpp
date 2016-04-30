#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	int min,max,m1=INT_MAX,m2=INT_MIN;
	
	for(int i=0;i<n;i++)
		{
			if(a[i]>=m2)
				{
					m2=a[i];
				}
			if(a[i]<=m1)
				{
					m1=a[i];
				}
		}
		
	for(int i=0;i<n;i++)
		{
			if(a[i]==m1)
				min=i;	
		}	
	for(int i=n-1;i>=0;i--)
		{
			if(a[i]==m2)
				max=i;
		}
	//33 11 44 22	
	
	int ans;
	if(max<min)
	ans=max+(n-1-min);
	else
	ans=max+(n-2-min);
	cout<<ans;
	
	
	return 0;
}
