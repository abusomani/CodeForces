#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N;
    cin>>N;
    while(N--){
        string s;
        cin>>s;
        if(s.size() <= 10)cout<<s<<endl;
        else{
            cout<<s[0]<<s.size()-2<<s.back()<<endl;
        }
    }
    return 0;
}