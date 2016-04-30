#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N,p,q,x;
	cin>>N;
	
	bool levels[N+1];
	memset(levels,false,N+1);
	
	cin>>p;
	
	for(int i=0;i<p;i++)
	{
		cin>>x;
		levels[x] = true;	
	}
	
	cin>>q;
	
	for(int i=0;i<q;i++)
	{
		cin>>x;
		levels[x] = true;	
	}
	
	for(int i=1;i<N+1;i++)
		if(levels[i] == false)
			{
				cout<<"Oh, my keyboard!";
				return 0;
			}
	
	cout<<"I become the guy.";
}
