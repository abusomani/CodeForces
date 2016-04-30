#include <bits/stdc++.h>
using namespace std;

int factor(int x, int N)
{
	int c = 0;
	if(x <= N) c++;
	for(int i=2; i<=N; i++)
	{
		if(x%i == 0 and (x/i) <= N)
		c++;
	}
	return c;
}

int main()
{

	int N;
	cin>>N;
	
	int x;
	cin>>x;

	cout<<factor(x,N);
	
}
