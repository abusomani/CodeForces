#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    cin>>s;
    pair<int,string> P = {INT_MAX, s};
    int toL = 0, toU = 0;
    for(auto ch: s){
        if(ch != (char)tolower(ch))
            toL++;
        if(ch != (char)toupper(ch))
            toU++;
    }
    if(toL <= toU){
        for(auto ch: s)
            cout<<(char)tolower(ch);
    } else {
        for(auto ch: s)cout<<(char)toupper(ch);
    }
    return 0;
}