#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, k, l, c, d, p, nl, np;
    cin>>n>> k>> l>> c>> d>> p>> nl>> np;
    int drinkQ = k * l;
    int toasts = drinkQ / nl;
    int slices = c * d;
    toasts = min(toasts, slices);
    toasts = min(toasts, p / np);
    cout << toasts / n << endl;
    return 0;
}