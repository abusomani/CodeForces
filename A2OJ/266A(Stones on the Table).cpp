#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N;
    cin>>N;
    string s;
    cin>>s;
    int res = 0, cnt = 1;
    for(int i=1; i<N; i++){
        if(s[i] == s[i-1])cnt++;
        else{
            res += cnt-1;
            cnt = 1;
        }
    }
    cout<<res + (cnt - 1);
    return 0;
}