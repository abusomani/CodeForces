#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	int arr[d+1];
	for(int i=0;i<=d;i++)
	arr[i]=0;
	
	if(k<=d)
	for(int i=k;i<=d;i+=k)
	arr[i]=1;
	
	if(l<=d)
	for(int i=l;i<=d;i+=l)
	arr[i]=1;
	
	if(m<=d)
	for(int i=m;i<=d;i+=m)
	arr[i]=1;
	
	if(n<=d)
	for(int i=n;i<=d;i+=n)
	arr[i]=1;
	
	int count=0;
	
	for(int i=1;i<=d;i++)
		if(arr[i])
		count++;
		
	cout<<count;

return 0;
}
