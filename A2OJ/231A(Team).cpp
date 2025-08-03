#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N;
    cin>> N;
    int x, res = 0;
    for(int i=0; i<N; i++){
        int sm = 0;
        for(int j=0; j<3; j++){
            cin>>x;
            sm += x;
        }
        if(sm >= 2)res++;
    }
    cout<<res;
    return 0;
}