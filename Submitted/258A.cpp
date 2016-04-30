#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	bool zero = false;
	bool one = false;
	
	for(int i=0;i<s.size();i++)
	{
		if(s[i] == '0')
		zero = true;
	
		else
		one = true;
	}
	if(zero == false)
	{
		for(int i=0;i<s.size() - 1;i++)
		cout<<"1";	
	}
	
	else
	{
		bool first = false;
		for(int i=0;i<s.size();i++)
		{
			if(s[i] == '0' and first == false)
			{
				first = true;
				continue;
			}
			cout<<s[i];
		}	
	}
	
}
