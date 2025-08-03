#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long N;
    cin>>N;
    vector<long> fib = {0, 1};
    while(fib.back() < N)
        fib.push_back(fib.back() + fib[fib.size()-2]);
    if(N == 0){
        cout << 0 << " " << 0 <<" " <<0;
    } else if(N == 1){
        cout << 0 << " " << 0 <<" " <<1;
    }
    else {
        for(int i=1; i<fib.size(); i++){
            if(fib[i] == N){
                cout<< 0 << " " << fib[i-2] << " " << fib[i-1];
                return 0;
            }
        }
    }
    return 0;
}