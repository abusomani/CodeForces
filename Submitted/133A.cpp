#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int ans=0;
	for(int i=0;i<s.size();i++)
		{
			if(s[i]=='H'||s[i]=='9'||s[i]=='Q')
			ans=1;
			
		}
	if(ans)
	cout<<"YES";
	else
	cout<<"NO";
	
	
	return 0;
}
