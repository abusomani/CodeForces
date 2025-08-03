#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N;
    cin>>N;
    N++;
    while(true){
        string s = to_string(N);
        set<char> St(s.begin(), s.end());
        if(St.size() == 4){
            cout<<s;
            break;
        }
        N++;
    }
    return 0;
}