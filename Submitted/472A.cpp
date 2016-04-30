#include<bits/stdc++.h>
using namespace std;

int a[1000007];

void sieve()
{
	
	a[0]=-1;a[1]=-1;
	
	a[2]=0;
	
	for(int i=2;i<1000007;i+=2)
	a[i]=1;
	
	for(int i=3;i<sqrt(1000007);i+=2)
		{
			if(a[i]==0)
				{
					for(int j=i*i;j<1000007;j+=i)
						a[j]=1;
				}
		}
}

int main()
{
	
	sieve();
	
	int N;
	cin>>N;
	
	for(int i=4;i<=(N/2);i++)
		{
			if((a[i]==1)&&(a[N-i]==1))
				{
					cout<<i<<" "<<N-i;
					break;
				}
		}
	
	return 0;
}
