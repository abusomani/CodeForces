#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin>>N;
	
	int arr[N];
	for(int i=0; i <N; i++)
	cin>>arr[i];
	
	int untreated = 0;
	int k = 0;
	int positive = 0;
	
	while(k < N)
	{
		if(arr[k] < 0)
		{
			if(positive > 0)
			{
				k++;
				positive--;
			}
			else
			{
				untreated ++;
				k++; 
				positive = 0;
			}
		}
		
		else if(arr[k] > 0)
			{
				positive += arr[k];
				k++;
				
			}
	}
	
	cout<<untreated;
}
