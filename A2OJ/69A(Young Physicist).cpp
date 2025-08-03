#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, x, y, z, xx = 0, yy = 0, zz = 0;
    cin>>N;
    while(N--){
        cin>>x>>y>>z;
        xx += x;
        yy += y;
        zz += z;
    }
    if(xx == 0 and yy == 0 and zz == 0)cout<<"YES";
    else cout<<"NO";
    return 0;
}