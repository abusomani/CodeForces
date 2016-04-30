#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin>>N;
	
	int a[N],b[N+1];
	for(int i=0;i<N;i++)
		{
			cin>>a[i];
			b[a[i]]=i+1;
		}
	
	for(int i=1;i<=N;i++)
		cout<<b[i]<<" ";
	
	return 0;
}
