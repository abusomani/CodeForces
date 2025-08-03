#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll N, K;
    cin>>N>>K;
    // First (N+1)/2 are odd numbers and then N - (N+1)/2 are even
    ll sep = (N+1)/2;
    if(K <= sep)
        cout << 1 + (K-1) * 2;
    else
        cout << 2 + (K-1-sep) * 2;
    return 0;
}