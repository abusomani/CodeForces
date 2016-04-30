	#include <bits/stdc++.h>
	using namespace std;
	
	int main()
	{
		int a,b,c,d,e;
		cin>>a>>b>>c>>d>>e;
		
		if((a+b+c+d+e) % 5 == 0 and (a+b+c+d+e) >=5)
		cout<<(a+b+c+d+e)/5;
		
		else
		cout<<"-1";
	}
