#include <bits/stdc++.h>
using namespace std;

int main()
{

	string s;
	cin>>s;
	
	for(int i=0;i<s.size();i++)
	{
		if(i==0 and s[i] == '9')
			cout<<s[i];
		
		else if(s[i] <= '4')
			cout<<s[i];
		else
			cout<<(9-(s[i]-'0'));
	}
	
}
