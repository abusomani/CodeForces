#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, x;
    cin>>N;
    vector<int> V;
    for(int i=0; i<N; i++){
        cin>>x;
        V.push_back(x);
    }
    pair<int,pair<int,int>>P = {abs(V.front() - V.back()), {0, N-1}};
    for(int i=0; i<N-1; i++){
        if(abs(V[i] - V[i+1]) < P.first){
            P = {abs(V[i] - V[i+1]), {i, i+1}};
        }
    }
    cout<<P.second.first +1 << " " <<P.second.second + 1;
    return 0;
}