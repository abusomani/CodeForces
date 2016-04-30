#include<bits/stdc++.h>
using namespace std;
map <int,int> M;
int main() 
{
	M.clear();
	int n,a;
	cin>>n;
	int mx = INT_MIN;
	
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(M.find(a) == M.end())
		{
			M.insert(make_pair(a,1));
			mx = max(mx,1);
		}
		else
		{
			M[a]++;
			mx = max(mx,M[a]);
		}
	}
	cout<<mx<<" "<<M.size()<<endl;
	
	
	return 0;	
}
