#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N;
    cin>>N;
    int fives = 0, zeroes = 0, x;
    for(int i=0; i<N; i++){
        cin>>x;
        fives += x == 5;
        zeroes += x == 0;
    }
    if(zeroes == 0)cout<<-1;
    else {
        while(fives >= 1){
            string s = string(fives, '5') + "0";
            int num = 0;
            for(auto ch: s){
                num = num * 10 + (ch - '0');
                num = num % 90;
            }
            if(num == 0){
                cout << s + string(zeroes - 1, '0');
                return 0;
            }
            fives--;
        }
        cout<<0;
    }
    return 0;
}