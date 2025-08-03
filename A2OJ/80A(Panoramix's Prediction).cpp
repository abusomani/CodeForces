#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;
const int MXX = 1e5+5;
vector<int> primes;
bool isPrime[MXX];
void mark(int N){
    for(int i = N; i < MXX; i += N)isPrime[i] = false;
}
void sieve(){
    memset(isPrime, true, sizeof(isPrime));
    isPrime[0] = isPrime[1] = false;
    isPrime[2] = true; 
    mark(2);
    primes.push_back(2);
    for(int i=3; i<= sqrt(MXX); i+=2)
        if(isPrime[i]){
            primes.push_back(i);
            mark(i);
        }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    sieve();
    int N, M;
    cin>>N>>M;
    for(int i=0; i<primes.size(); i++){
        if(primes[i] == N){
            if(primes[i+1] == M)
                cout<<"YES";
            else
                cout<<"NO";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}