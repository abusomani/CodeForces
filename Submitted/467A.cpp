#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
	int t,count=0;
	cin>>t;
	while(t--)
		{
			int p,q;
			cin>>p>>q;
			int l=q-p;
			if(l>=2)
			count++;
			
		}
	cout<<count;


return 0;
}
