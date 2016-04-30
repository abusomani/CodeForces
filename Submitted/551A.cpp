#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 2005

int cnt[MAX];

int main()
{
	memset(cnt,0,MAX);
	int N;
	cin>>N;
	
	int arr[N];
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
		cnt[arr[i]]++;
	}

	int higher = 0, temp;
	for(int i=MAX-2;i>=0;i--)
	{
		temp = cnt[i];
		cnt[i] = 1 + higher;
		higher += temp;
	}
	
	for(int i=0;i<N;i++)
	{
		cout<<cnt[arr[i]]<<" ";
	}
	
}
