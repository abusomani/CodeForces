#include <bits/stdc++.h>
using namespace std;

int main()
{
	set<char> S;
	
	char c;
	while((cin>>c) and c != '}')
		if(c != '{' and c != ',')
		S.insert(c);
		
	cout<<S.size();
	
}
