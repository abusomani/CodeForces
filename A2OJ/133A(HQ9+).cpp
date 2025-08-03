#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    cin>>s;
    for(auto ch: s){
        if(ch == 'H' or ch == 'Q' or ch =='9'){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}