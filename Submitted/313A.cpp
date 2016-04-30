#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> V;
	int N;
	cin>>N;
	if(N > 0)cout<<N;
	
	else
	{
		int t = N;
		while(t)
		{
			V.push_back(t%10);
			t /= 10;
		}
		
		int last = 0 , second = 0;
		
		for(int i=V.size()-1;i>=1;i--)
		{
			last = last*10 + V[i];
		}
		for(int i=V.size()-1;i>=0;i--)
		{
			if(i != 1)
			second = second*10 + V[i];
		}
		cout<<max(last,second);
	}	
	
}
