#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int n;
	cin>>n;
	
	int h,v;
	bool ho[n],ve[n];
	memset(ho,false,n);
	memset(ve,false,n);
	
	for(int i=1;i<=(n*n);i++)
	{
		cin>>h>>v;
		
		if((ho[(h-1)] == false) and (ve[(v-1)] == false))
		{
			ho[(h-1)] = true;
			ve[(v-1)] = true;
			cout<<i<<" ";
		}
		
	}
	
	
}
