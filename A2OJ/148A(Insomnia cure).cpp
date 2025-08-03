#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

bool isDivisible(int num, int a, int b, int c, int d){
    return num % a == 0 or num % b == 0 or num % c == 0 or num % d == 0;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int k, l, m, n, d, res = 0;
    cin>>k>>l>>m>>n>>d;
    for(int i=1; i<=d; i++)
        if(isDivisible(i, k, l, m, n))res++;
    cout<<res;
    return 0;
}