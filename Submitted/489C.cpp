#include <bits/stdc++.h>
using namespace std;

int main()
{
	

	int m,s;
	cin>>m>>s;
	if(ceil((float)s/9) > m){cout<<"-1 -1"; return 0;}
	if(m == 1 and s <= 9){cout<<s<<" "<<s<<endl; return 0;}
	if(s ==0 and m > 1) {cout<<"-1 -1"; return 0;}
	
	int arr[m] = {0}, rem = s;
	
	int j = m-1;
	while(rem != 0)
	{
		arr[j]++;
		rem --;
		if(rem == 0)
			break;
		if(arr[j] == 9 and rem > 0) j--;
		
	}
	
	int arr1[m];
	for(int i=0;i<m;i++)
	arr1[i] = arr[i];
	
	j = 0;
	int c = 0;
	while(arr1[j] == 0)
	{
		c++;
		j++;
	}
	
	if(j > 0)
	{
		arr1[j]--;
		arr1[0]++;
	}
	
	for(int i=0;i<m;i++)
		cout<<arr1[i];	
	
	cout<<" ";
	
	for(int i = m-1; i>=0; i--)
	cout<<arr[i];
	
	return 0;
}
