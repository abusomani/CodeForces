#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	string s;
	cin>>s;
	
	int a[2]={0};
	
	for(int i=0;i<s.size();i++)
		a[(s[i]-'0')]++;
		
	int ans=max(a[0],a[1])-min(a[0],a[1]);
	
	cout<<ans;
	
	return 0;
}
