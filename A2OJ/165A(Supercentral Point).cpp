#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

bool doesSmallerExist(set<int> &St, int num){
    auto smaller = St.lower_bound(num);
    if(smaller == St.begin())return false;
    return true;
}

bool doesLargerExist(set<int> &St, int num){
    auto larger = St.upper_bound(num);
    if(larger == St.end())return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N;
    cin>>N;
    map<int, set<int>> X, Y;
    vector<pair<int,int>> V;
    int x, y;
    for(int i=0; i<N; i++){
        cin>>x>>y;
        V.push_back({x, y});
        X[x].insert(y);
        Y[y].insert(x);
    }
    int res = 0;
    for(auto p: V){
        x = p.first;
        y = p.second;
        if(doesSmallerExist(X[x], y) and doesLargerExist(X[x], y) and doesSmallerExist(Y[y], x) and doesLargerExist(Y[y], x)){
            res++;
        }
    }
    cout<<res;
    return 0;
}