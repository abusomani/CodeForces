#include<bits/stdc++.h>
using namespace std;

struct Game
{
	int val;
	int id;	
};

int compare(const Game &a, const Game &b)
{
	return (a.val < b.val);
}

int main() 
{
	int N,K;
	cin>>N>>K;
	
	Game arr[N];
	
	for(int i=0;i<N;i++)
	{
		cin>>arr[i].val;
		arr[i].id = i;
	}
	
	sort(arr,arr+N,compare);
	
	int c  = 0;
	vector<int> V;
	for(int i=0;i<N and K != 0; i++)
	{
		if(arr[i].val <= K)
		{
			c++;
			V.push_back(arr[i].id + 1);
			K -= arr[i].val;	
		}
		if(K <= 0)
		break;
	}
	cout<<c<<endl;
	for(int i=0;i<V.size();i++)
	cout<<V[i]<<" ";
	
	return 0;	
}
