#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    vector<vector<int>> mat(5, vector<int>(5));
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++){
            cin>>mat[i][j];
            if(mat[i][j])cout<<abs(2 - i) + abs(2 - j) <<endl;
        }
    return 0;
}