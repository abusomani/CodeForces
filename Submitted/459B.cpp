#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N;
	cin>>N;
	
	int a[N];
	int mn = INT_MAX, mx = INT_MIN;
    
	for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }
    long long t1 = 0, t2 = 0;
    for (int i = 0; i < N; i++)
    {
        t1 += (a[i] == mn);
        t2 += (a[i] == mx);
    }
    cout << mx - mn << " ";
    if (mn == mx)
        cout << N * (N - 1) / 2;
    else
        cout << t1 * t2;
}
