#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	
	int c = 0;
	
	if(n > m)
	cout<<(n-m);
	
	else
	{
		while(n <= m)
		{
			c++;
			n *= 2;
		}
		
		if(n == m)
		{
			cout<<c;
			return 0;
		}
		else if(n > m)
		{
			c += (n-m);
			cout<<c;
		}
	}
	
	
}
