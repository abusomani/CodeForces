#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    cin>>s;
    set<char> St(s.begin(), s.end());
    if(St.size() & 1)cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
    return 0;
}