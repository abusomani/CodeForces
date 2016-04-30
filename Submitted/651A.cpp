#include <bits/stdc++.h>
using namespace std;
#define ll long long

int compute(int a, int b)
{
	if(b > a)
	swap(a,b);
	
	if(b == 0 || a == 1) return 0;
	
	return (1+compute(a-2,b+1));	
}

int main()
{
	
	int a,b;
	cin>>a>>b;
	
	cout<<compute(a,b);
	
	return 0;
}


