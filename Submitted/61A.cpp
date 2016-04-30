#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a,b,ans;
	cin>>a>>b;
	
	for(int i=0; i<a.size(); i++)
	ans += ((a[i]-'0')^(b[i]-'0')+'0');
	
	cout<<ans;
}
