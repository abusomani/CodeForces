#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N;
    cin>>N;
    if(N&1){
        cout<<-1;
        return 0;
    }
    vector<int> res(N);
    for(int i=0; i<N; i++)res[i] = i+1;
    for(int i=1; i<N; i+=2)swap(res[i], res[i-1]);
    for(int i=0; i<N; i++)cout<<res[i] << " ";
    return 0;
}