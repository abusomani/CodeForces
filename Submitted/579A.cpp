#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin>>N;
	
	int c = 0;
	while(N)
	{
		if(N%2 == 1) c++;
		N /= 2;	
	}	
	cout<<c;
}
