#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,s;
	cin>>a>>b>>s;
	
	
	int mn = abs(a)+abs(b);
	
	s -= mn;
	
	if(s%2 == 0 and s >= 0)
	cout<<"Yes";
	else
	cout<<"No";
	
}
