#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N;
    cin>>N;
    vector<int> V(N);
    for(int i=0; i<N; i++)cin>>V[i];
    pair<int,int> mx_idx = {V[0], 0};
    pair<int,int> mn_idx = {V[0], 0};
    for(int i=0; i<N; i++){
        if(V[i] > mx_idx.first)mx_idx = {V[i], i};
        if(V[i] <= mn_idx.first)mn_idx = {V[i], i};
    }
    if(mn_idx.second < mx_idx.second)
        cout<<mx_idx.second + (N - mn_idx.second) - 2;
    else 
        cout<<mx_idx.second + (N - mn_idx.second) - 1;
    return 0;
}