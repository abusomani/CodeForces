#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, x, y, res = 0, sm = 0;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>x>>y;
        sm -= x;
        sm += y;
        res = max(res, sm);
    }
    cout<<res;
    return 0;
}