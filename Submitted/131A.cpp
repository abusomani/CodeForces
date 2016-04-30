#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int len=s.size();
	if(len==1)
		{
			if((int)s[0]>=97)
			cout<<(char)(s[0]-32);
			else
			cout<<(char)(s[0]+32);
		}
		
	else 
		{
		int flag=0;
		for(int i=1;i<len;i++)
			if((int)s[i]>=97)
				flag=1;
				
		if(flag)
		cout<<s;
		else
			{
				for(int i=0;i<len;i++)
					{
						if((int)s[i]>=97)
							cout<<(char)(s[i]-32);
						else
						cout<<(char)(s[i]+32);
					}
			}
		}
	return 0;
}
