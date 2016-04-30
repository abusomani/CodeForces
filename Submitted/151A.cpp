#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;	
	
	int drink = k*l;
	int slices = c*d;
	int d1 = drink/nl;
	int sl = slices;
	int p1 = p/np;
	
	cout<<(min(d1,min(sl,p1)))/n;
	
	return 0;
}


