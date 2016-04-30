#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a,b,c;
	cin>>a>>b>>c;
	
	int total[26]={0};
	
	for(int i=0;i<a.size();i++)
		total[(a[i]-'A')]++;
	for(int i=0;i<b.size();i++)
		total[(b[i]-'A')]++;
	
	for(int i=0;i<c.size();i++)
		total[(c[i]-'A')]--;
		
	for(int i=0; i<26;i++)
		if(total[i] != 0)
		{
			cout<<"NO";
			return 0;		
		}
	cout<<"YES";
}
