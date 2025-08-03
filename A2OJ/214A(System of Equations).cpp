#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, M, res = 0;
    cin>>N>>M;
    for(int a=0; a<=sqrt(N); a++)
        for(int b=0; b<=sqrt(M); b++)
            if(a*a + b == N and b*b + a == M)res++;
    cout<<res;
    return 0;
}