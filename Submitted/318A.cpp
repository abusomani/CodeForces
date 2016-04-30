#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N , k , separation ,ans;
	cin>>N>>k;
	
//	1 3 5 2 4 6 - 6
//	1 3 5 7 2 4 6 - 7
	
	separation = (N+1)/2;
	separation ++;
	
	if(k < separation)
		ans =  (1+(k-1)*2);
	else
		ans = (2+(k-separation)*2);
	
	cout<<ans;
}
