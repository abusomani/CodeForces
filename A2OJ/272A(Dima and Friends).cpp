#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N;
    cin>>N;
    int sm = 0, x, res = 0;
    for(int i=0; i<N; i++){
        cin>>x;
        sm += x;
    }
    for(int i=1; i<=5; i++)
        if((sm + i) % (N+1) != 1)res++;
    cout<<res;
    return 0;
}