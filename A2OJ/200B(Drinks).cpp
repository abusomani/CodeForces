#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N;
    cin>>N;
    int x, sm = 0;
    for(int i=0; i<N; i++){
        cin>>x;
        sm += x;
    }
    cout << 100.0 * sm / (N * 100.0);
    return 0;
}