// starting from 0 compute all the numbers by adding a,b,c and take the minimum number generated
//and do on till we reach N
#include <bits/stdc++.h>
using namespace std;

int pieces(int N,int a,int b,int c)
{	
	int P[N+1];
	memset(P,0,sizeof(P));
	
	set <int> Q; 
	set <int> :: iterator it;
	
	int s = 0;
	
	bool done = true;
	while(done)
	{ 	
		done = false;
		if((s+a) <= N)
		{
			P[(s+a)] = max(P[s+a],1 + P[s]);
			Q.insert((s+a));
			done = true;
		}
		if((s+b) <= N)
		{
			P[(s+b)] = max(P[s+b],1 + P[s]);	
			Q.insert((s+b));
			done = true;
		}
		if((s+c) <= N)
		{
			P[(s+c)] = max(P[s+c],1 + P[s]);	
			Q.insert((s+c));	
			done = true;
		}
		
		it = Q.begin();
		if(it != Q.end())
		{
			s = *it;
			Q.erase(it);
		}
	}
	
	return P[N];
}

int main()
{
	int N,a,b,c;
	cin>>N>>a>>b>>c;
	cout<<pieces(N,a,b,c);
	return 0;
}


