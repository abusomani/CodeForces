#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	if(b == 0)
	return a;
	
	else
	return gcd(b,a%b);
}


int main()
{
	int N;
	cin>>N;
	
	int arr[N];
	for(int i=0;i<N;i++)
		cin>>arr[i];
	int c = 0;
	vector<int> V;
	for(int i=0; i<N; i++)
	{
		V.push_back(arr[i]);
		
		if(i < N-1 and gcd(arr[i],arr[i+1]) != 1)
		{
			V.push_back(1);
			c++;
		}
	}
	
	cout<<c<<endl;
	for(int i=0;i<V.size();i++)
	cout<<V[i]<<" ";
	
	
	return 0;
}
