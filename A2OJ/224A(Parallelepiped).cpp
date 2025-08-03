#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int A, B, C;
    cin>>A>>B>>C;
    int l = sqrt((A * C)/ B);
    int w = sqrt((B * C)/ A);
    int h = sqrt((B * A)/ C);
    cout<<4 * (l + w + h);
    return 0;
}