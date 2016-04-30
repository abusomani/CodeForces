#include <bits/stdc++.h>
using namespace std;
struct Team{
	int element;
	int index;
};

bool compareElement(const Team &a, const Team &b)
{
	return (a.element < b.element);
}

int main()
{

	int N;
	cin>>N;
	Team arr[N];
	
	for(int i=0;i<N;i++)
	{
		cin>>arr[i].element;
		arr[i].index = i+1;
	}
	
	sort(arr,arr+N,compareElement);
	
	int one  = -1 , two = -1, three = -1;
	
	for(int i=0;i<N;i++)
	{
		if(arr[i].element == 1 and one == -1) one = i;
		if(arr[i].element == 2 and two == -1) two = i;
		if(arr[i].element == 3 and three == -1) three = i;
	}	
	
	if(one == -1 || two == -1 || three == -1)
	cout<<0;
	
	else
	{
		map<int,pair<int,int> > M;
		int c = 0;
	
		while((one < N) and (two < N) and (three < N))
		{
			if(arr[one].element != 1 || arr[two].element != 2 || arr[three].element != 3) break;
			c++;
			M.insert(make_pair(arr[one].index,make_pair(arr[two].index,arr[three].index)));
			one++; two++; three++;
		}
		cout<<c<<endl;
		for(map<int,pair<int,int> > :: iterator it = M.begin(); it != M.end(); it++)
		{
			pair<int,pair<int,int> > P = *it;
			
			cout<<P.first<<" "<<P.second.first<<" "<<P.second.second<<endl;
		}
	}
	
}
