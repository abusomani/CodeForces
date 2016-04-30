#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 40000005

int arr[MAX] = {0};

void compute()
{
	for(int i=1; i<MAX; i++)
	{
		int j = i;
		int m = 5;
		
		while(true)
		{
			if((j/m) == 0)break;
			
			arr[i] += (j/m);
			m *= 5;
		}
		
	}
	
}


int main()
{
	
	compute();
	
	ll N ,  ans = 0;
	cin>>N;
	vector<int>V;
	
	for(int i=1; i<MAX; i++)
	{
		if(arr[i] == N)
		{
			ans++;
			V.push_back(i);
		}
	}
	
	cout<<ans<<endl;
	for(int i=0;i<V.size();i++)
	cout<<V[i]<<" ";
	
	return 0;
}
