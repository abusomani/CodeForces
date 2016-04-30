#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	
	int k;
	cin>>k;
	
	int req ;
	req = ceil((float)(a+b+c)/5);
	req += ceil((float)(d+e+f)/10);
	
	if(req <=k)
	cout<<"YES";
	else
	cout<<"NO";
}
