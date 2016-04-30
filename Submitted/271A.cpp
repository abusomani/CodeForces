#include<bits/stdc++.h>
using namespace std;
int arr[10000]={0};

int digits(int n)
{
	
	int temp=n;
	int a[10]={0};
	
	while(temp)
		{
			a[temp%10]++;
			temp/=10;
		}
	
	for(int i=0;i<10;i++)
		if(a[i]>1)
			return 0;
			
	return 1;
			
}
int main()
{
	for(int i=1000;i<=10000;i++)
		{
			arr[i]=digits(i);
		}
		
	int t;
	cin>>t;
	t++;
	while(arr[t]==0)
	t++;
	cout<<t;
	return 0;
}
