#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string A, B;
    cin>>A>>B;
    for(int i=0; i<A.size(); i++){
        if(tolower(A[i]) == tolower(B[i]))continue;
        if(tolower(A[i]) < tolower(B[i])){
            cout<<-1;
            return 0;
        }
        else {
            cout<<1;
            return 0;
        }
    }
    cout<<0;
    return 0;
}