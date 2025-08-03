#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, res = 0, x;
    cin>>N;
    set<int> St;
    for(int i=0; i<N; i++){
        cin>>x;
        if(!St.empty() and (x < *St.begin() or x > *St.rbegin()))res++;
        St.insert(x);
    }
    cout<<res;
    return 0;
}