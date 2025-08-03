#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N;
    cin>>N;
    int left = 0, right = 0, x, y;
    for(int i=0; i<N; i++){
        cin >> x >> y;
        left += x;
        right += y;
    }
    cout << min(left, N - left) + min(right, N - right);
    return 0;
}