#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, M, x;
    cin>>N>>M;
    deque<pair<int,int>> V;
    for(int i=0; i<N; i++){
        cin>>x;
        V.push_back({x, i+1});
    }
    int last_idx = 0;
    while(!V.empty()){
        if(V.front().first <= M){
            last_idx = V.front().second;
            V.pop_front();
            continue;
        }
        V.front().first -= M;
        auto P = V.front();
        last_idx = P.second;
        V.pop_front();
        V.push_back(P);
    }
    cout<<last_idx;
    return 0;
}