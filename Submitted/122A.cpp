#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
	int arr[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	int t;
	cin>>t;
	int f=0;
	for(int i=0;i<14;i++)
		{
			if(arr[i]>t)
				break;
			else if(t%arr[i]==0)
				f=1;
			
		}
	 if(f)
	cout<<"YES";
	else
	cout<<"NO";


return 0;
}
