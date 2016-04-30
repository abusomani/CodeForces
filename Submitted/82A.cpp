#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000004

ll arr[30];

void compute()
{
	ll t = 1 , c = 1 , start = 1 , i = 0;
	while(start <= MAX)
	{
		arr[i++] = start;
		start += t*5;
		t <<= 1;
		c++;
	}
	arr[i++] = start;
	
}

int main()
{
	string s[5] = {"Sheldon", "Leonard", "Penny", "Rajesh" , "Howard"};
	compute();
	int N;
	cin>>N;
	ll repeat;
	
	for(int i=1;i<29;i++)
	{
		if(N>= arr[i-1] and N< arr[i])
		{
			repeat = (arr[i]-arr[i-1])/5; 
			int k = (N-arr[i-1])/repeat;
			cout<<s[k];
			break;
		}
	}
	
}
