#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	
	int maxProd = INT_MIN;
	
	if((a+b+c) > maxProd)
		maxProd = (a+b+c);
	if((a+b*c) > maxProd)
		maxProd = (a+b*c);
	if((a*b+c)>maxProd)
		maxProd = (a*b+c);
	if((a*b*c) > maxProd)
		maxProd = (a*b*c);
	if(((a+b)*c) > maxProd)
		maxProd = ((a+b)*c);
	if((a*(b+c)) > maxProd)
		maxProd = (a*(b+c));
	cout<<maxProd;
	
}
