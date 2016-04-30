#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,x;
	cin>>n;
		
	int init[n],first[n-1],second[n-2];
	
	for(int i=0;i<n;i++)
	cin>>init[i];
	
	for(int i=0;i<n-1;i++)
	cin>>first[i];
	
	for(int i=0;i<n-2;i++)
	cin>>second[i];
	
	sort(init,init+n);
	sort(first,first+n-1);
	sort(second,second+n-2);
	
	bool flag = false;
	
	for(int i=0;i<n-1;i++)
	{
		if(first[i] != init[i])
		{
			flag = true;
			cout<<init[i]<<endl;
			break;
		}
	}
	
	if(!flag)
		cout<<init[n-1]<<endl;
		
	flag = false;
	
	for(int i=0;i<n-2;i++)
	{
		if(second[i] != first[i])
		{
			flag = true;
			cout<<first[i]<<endl;
			break;
		}
	}
	
	if(!flag)
		cout<<first[n-2];
	
	
}
