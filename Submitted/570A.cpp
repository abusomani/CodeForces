#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 105
int candidate[MAX];

int main()
{
	int n,m;
	cin>>n>>m;
	memset(candidate,0,MAX);
	
	int arr[n],max,pos;
	
	for(int i=0;i<m;i++)
	{
		max=INT_MIN;
//		memset(arr,0,n);
//		cout<<"Hello : "<<i<<endl;
		for(int j=0;j<n;j++)
		{
			cin>>arr[j];
			if(max < arr[j])
			{
				max = arr[j];
				pos = j;
			}
		}
		candidate[(pos+1)]++;
	}
	
	max=INT_MIN;
	for(int i=0;i<MAX;i++)
	{
		if(max < candidate[i])
		{
			max = candidate[i];
			pos = i;
		}
	}
		
	cout<<pos;
}
