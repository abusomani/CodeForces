#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N , T;
    cin>>N>>T;
    string s;
    cin>>s;
    while(T--){
        for(int i=0; i<N-1;){
            if(s[i] == 'B' and s[i+1] == 'G'){
                swap(s[i], s[i+1]);
                i += 2;
            }
            else
                i++;
        }
    }
    cout<<s;
    return 0;
}