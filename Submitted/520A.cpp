#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin>>N;
	
	string s;
	cin>>s;
	
	int arr[26] = {0};
	
	for(int i=0; i<s.size();i++)
	{
		s[i] = tolower(s[i]);
		
		arr[(s[i]-'a')]++;
	}
	
	for(int i=0; i<26; i++)
		if(arr[i] == 0)
		{
			cout<<"NO";
			return 0;
		}
	cout<<"YES";
}
