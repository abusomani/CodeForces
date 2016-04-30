#include <bits/stdc++.h>
using namespace std;

map<pair<int,int>,int> M;

int main()
{
	M.clear();
    int N;
    cin>>N;
    
    int h,m;
    
    int mx = 1;
    
    for(int i=0;i<N;i++)
    {
    	cin>>h>>m;
    	pair<int,int> p = make_pair(h,m);
    	
    	if(M.find(p) == M.end())
    		M.insert(make_pair(p,1));
    	else
    	{
    		M[p]++;
    		if(M[p] > mx)
    			mx = M[p];
		}
	}
    
    cout<<mx;
    
    return 0;
}
