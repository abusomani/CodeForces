#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	
	int mx = INT_MAX,one;
	
	for(int i=0;i<=(n/2);i++)
	{
		// i 2 step moves;
		one = n - i*2;
		if((i+one)%m == 0)
		{
			if((i+one) < mx)
				mx = (i+one);
		}
		
	}
	if(mx != INT_MAX)
	cout<<mx;
	else
	cout<<-1;
}
