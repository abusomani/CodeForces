#include<bits/stdc++.h>
using namespace std;
 
int t[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
 
int main() {
	int x;
	cin>>x;
	char s1[15];
	cin>>s1;
	cin>>s1;
	if(s1[0] == 'w') 
	{
	    int current = 5;
	    int ans = 0;
	    for(int i = 0; i < 366; i++) 
		{
	        if(current == x) 
				++ans;
	        
			++current;
	        
			if(current > 7) current = 1;
	    }
	    
		cout<<ans<<endl;
		return 0;
	}
	
	int c = 0;
	for(int i = 0; i < 12; i++) 
	c += x <= t[i];
	cout<<c<<endl;
	return 0;
}
