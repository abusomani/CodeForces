#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	vector<int> number;
	int N;
	cin>>N;
	
	long long sum = 0;
	
	for(int i=1;i<=N-1;i++)
	{
		sum += (N-i)*i;
	}
	cout<<(sum + N);
}
