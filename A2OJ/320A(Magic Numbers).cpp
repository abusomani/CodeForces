#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

bool dfs(string &s, int idx){
    if(idx < 0)return true;
    if(s[idx] == '1' and dfs(s, idx-1))return true;
    if(s[idx] == '4' and idx >= 1 and s[idx-1] == '1' and dfs(s, idx-2))return true;
    if(s[idx] == '4' and idx >= 2 and s[idx-1] == '4' and s[idx-2] == '1' and dfs(s, idx-3))return true;
    return false;    
}

bool is_magical(string number) {
	for (int i = 0; i < (int)number.size(); i++)
		if (number[i] != '1' && number[i] != '4')
			return false;

	if (number[0] == '4')
		return false;

	if (number.find("444") != number.npos)
		return false;

	return true;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    cin>>s;
    if(is_magical(s))cout<<"YES";
    else    cout<<"NO";
    return 0;
}