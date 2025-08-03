#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;
bool isLucky(string s){
    for(auto ch: s)if(ch != '4' and ch != '7')return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    cin>>s;
    int lucky = 0;
    for(auto ch: s)if(ch == '4' or ch == '7')lucky++;
    if(isLucky(to_string(lucky)))cout<<"YES";
    else cout<<"NO";
    return 0;
}