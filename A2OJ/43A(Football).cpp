#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N;
    cin>>N;
    unordered_map<string,int>Mp;
    string s;
    for(int i=0; i<N; i++){
        cin>>s;
        Mp[s]++;
    }
    pair<string, int> P = {"", 0};
    for(auto p: Mp)
        if(p.second > P.second)
            P = {p.first, p.second};
    cout<<P.first;
    return 0;
}