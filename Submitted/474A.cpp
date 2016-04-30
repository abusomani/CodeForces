#include <bits/stdc++.h>
using namespace std;
#define ll long long

string keyboard[] = {"qwertyuiop","asdfghjkl;","zxcvbnm,./"};

int main()
{
	char c;
	cin>>c;
	
	string s;
	cin>>s;
	
	if(c == 'L')
	{
		for(int i=0; i<s.size();i++)
		{
			for(int j=0; j<3; j++)
			{
				if(keyboard[j].find(s[i]) != string::npos)	
				{
					cout<<keyboard[j][(keyboard[j].find(s[i])) + 1];
				}
			}	
		}	
	}
	else
	{
		for(int i=0; i<s.size();i++)
		{
			for(int j=0; j<3; j++)
			{
				if(keyboard[j].find(s[i]) != string::npos)	
				{
					cout<<keyboard[j][(keyboard[j].find(s[i])) - 1];
				}
			}	
		}
	}
}
