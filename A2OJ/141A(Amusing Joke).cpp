#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string A, B, C;
    cin>>A>>B>>C;
    vector<int> cnt(256, 0);
    for(auto c: C)cnt[c]++;
    for(auto c: A)cnt[c]--;
    for(auto c: B)cnt[c]--;
    for(int i=0; i<256; i++)if(cnt[i] != 0){
        cout<<"NO";
        return 0;
    }
    cout << "YES";
    return 0;
}