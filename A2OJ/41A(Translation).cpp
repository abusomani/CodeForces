#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string A, B;
    cin>>A>>B;
    reverse(B.begin(), B.end());
    if(A == B)cout<<"YES";
    else cout<<"NO";
    return 0;
}