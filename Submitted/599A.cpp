#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int p1,p2,onetwo;
	cin>>p1>>p2>>onetwo;
	
	int ans = INT_MAX;
	
	//p1 - > onetwo -> p2
	ans = min(ans , (p1+onetwo+p2));
	
	//p1->p1->p2->p2
	ans = min(ans, (2*p1 + 2*p2));
	
	//p1->onetwo->onetwo->p1
	ans = min(ans , (2*p1 + 2*onetwo));
	
	//p2->onetwo->onetwo->p2
	ans = min(ans, (2*p2 + 2*onetwo));
	
	cout<<ans;
	return 0;
		
}
