#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    cin>>s;
    string res;
    for(int i=0; i<s.size(); ){
        if(s[i] == '.'){res += '0'; i++;}
        else {
            if(s[i+1] == '.')res += '1';
            else res += '2';
            i += 2;
        }
    }
    cout<<res;
    return 0;
}