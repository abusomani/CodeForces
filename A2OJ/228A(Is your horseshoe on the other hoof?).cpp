#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    set<int> St;
    int x;
    for(int i=0; i<4; i++){
        cin>>x;
        St.insert(x);
    }
    cout<<4-St.size();
    return 0;
}