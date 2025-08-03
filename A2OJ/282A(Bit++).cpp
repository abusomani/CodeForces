#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N;
    cin>>N;
    int res = 0;
    string op;
    for(int i=0; i<N; i++){
        cin>>op;
        if(op[0] == '+' or op[2]== '+')res++;
        else res--;
    }
    cout<<res;
    return 0;
}