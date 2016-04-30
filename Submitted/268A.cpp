#include <bits/stdc++.h>
using namespace std;

struct Game{
	int home;
	int guest;
};

int main()
{
	int N;
	cin>>N;
	Game g[N];
	
	for(int i=0;i<N;i++)
	cin>>g[i].home>>g[i].guest;
	
	int c = 0;
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(j != i)
			{
				if(g[j].guest == g[i].home)
				c++;
			}
		}
	}
	cout<<c;
}
