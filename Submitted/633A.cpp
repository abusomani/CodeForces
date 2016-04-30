#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	
	double d ;
	for(int i=0; (c - i*a) >= 0; i++)
	{
		d = (double)c - i*a;
		d = d/b;
		
		int n = (int)d;
		if(n == d)
		{
			cout<<"YES";
			return 0;
		}
	}
	
	cout<<"NO";
	return 0;
}
