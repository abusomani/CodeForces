#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N , x, y;
	cin>>N;
	string a , b;
	cin>>a>>b;
	
	int ans = 0;
	
	for(int i=0;i<a.size();i++)
	{
		x = (a[i]-'0'); y = (b[i]-'0');
		ans += min(abs(x-y),abs(10-max(x,y)+min(x,y)));
	}
	cout<<ans;
}
