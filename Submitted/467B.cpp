#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;


int diff(int a,int b){
	int ret=0;
	while(a || b){
		if((a&1) != (b&1))++ret;
		a>>=1;
		b>>=1;
	}
	return ret;
}

int main(int argc, char **argv){
	
	int n,m,k,fedor,c=0;
	cin>>n>>m>>k;
	vi v(m);
	
	for(int i=0;i<m;++i)
	cin>>v[i];
	cin>>fedor;
	
	for(int i=0;i<m;++i){
		if(diff(fedor,v[i])<=k)++c;
	}
	cout<<c<<'\n';

	return 0;
}
