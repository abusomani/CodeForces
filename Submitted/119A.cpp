#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	if(b == 0)
		return a;
		
	else
	return gcd(b,a%b);
}

int main()
{
	int a,b,n;
	cin>>a>>b>>n;
	
	int c = 0;//simon starts
	
	while(n)
	{
		if(c%2 == 0)
			n -= gcd(a,n);
		else
			n -= gcd(b,n);
		c++;
	}
	
	cout<<((c-1)%2);
}
