#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int total=n,count=0,days=0;
	while(total)
		{
			days++;
			count++;
			total--;
			if(count==m)
				{
					total++;
					count=0;
				}
		}
	cout<<days;
	return 0;
}
