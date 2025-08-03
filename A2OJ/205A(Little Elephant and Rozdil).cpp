#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N;
    cin>>N;
    int x;
    map<int,pair<int,int>>Mp;
    for(int i=0; i<N; i++){
        cin>>x;
        Mp[x] = {Mp[x].first + 1, i};
    }
    auto P = *Mp.begin();
    if(P.second.first > 1)
        cout<<"Still Rozdil";
    else 
        cout<<P.second.second + 1;
    return 0;
}