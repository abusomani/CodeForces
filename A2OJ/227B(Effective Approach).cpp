#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll N, M, x;
    cin>>N;
    unordered_map<ll,ll> Mp;
    for(int i=0; i<N; i++){
        cin>>x;
        Mp[x] = i+1;
    }
    cin>>M;
    ll A = 0, B = 0;
    for(int i=0; i<M; i++){
        cin>>x;
        A += Mp[x]; // index comparisons
        B += N - Mp[x] + 1; // 1 extra comparison from back
    }
    cout<<A << " " << B;
    return 0;
}