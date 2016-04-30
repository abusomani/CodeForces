#include<bits/stdc++.h>
using namespace std;

int main()
{
char s[205];
cin>>s;

char final[205];

int l=strlen(s);
int k=0;
int flag=0,count=0;

for(int i=0;i<l;)
	{
		if(s[i]=='W')
			{
				if((i+1)<l&&s[i+1]=='U')
					{
						if((i+2)<l&&s[i+2]=='B')
							{
							i+=3;
							if(flag&&(count==0))
								{
									final[k++]=' ';
									count++;
								}	
							}
						else
							{
							final[k++]=s[i];
							final[k]=s[i+1];
							k++;
							i+=2;
							flag=1;	
							count=0;
							}
					}
				else
					{
						final[k++]=s[i];
						i++;
						flag=1;
						count=0;
					}
			}
		else
			{
				final[k++]=s[i];
				i++;
				flag=1;
				count=0;
			}
	}
	final[k]='\0';
	cout<<final;




return 0;
}
