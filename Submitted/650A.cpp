#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define ll long long


int main()
{
	int n;
    cin>>n;
    int x,y;
    long long ans = 0;
    unordered_map<int, int> mx, my;
    map<pair<int, int>, int> mxy;
    for(int i = 1; i <= n; i++){
        cin>>x>>y;
        ans += mx[x] + my[y] - mxy[make_pair(x, y)];
        mx[x]++, my[y]++;
        mxy[make_pair(x, y)]++;
    }
    cout<<ans<<endl;
	
	return 0;
}
