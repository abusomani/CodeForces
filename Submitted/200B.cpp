#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin>>N;
	
	int arr[N],sm = 0;
	for(int i=0; i<N; i++)
	{
		cin>>arr[i];
		sm += arr[i];
	}
	
	double ans = (double)sm/N;
	cout<<std::fixed;
	cout<<std::setprecision(9);
	cout<<ans;
	 
}

