#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x,y,t;
	cin>>x>>y;
	t = min(x,y);
	
	cout<<t<<" ";

	x -= t;
	y -= t;
	
	if(x)
		cout<<(x/2);
	else
		cout<<(y/2);
}
