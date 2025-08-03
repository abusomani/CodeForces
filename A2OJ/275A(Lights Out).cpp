#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

void flip(vector<vector<int>> &lights, int i, int j, int N){
    lights[i][j] = !lights[i][j];
    if(i+1 < N)
        lights[i+1][j] = !lights[i+1][j];
    if(i-1 >= 0)
        lights[i-1][j] = !lights[i-1][j];
    if(j+1 < N)
        lights[i][j+1] = !lights[i][j+1];
    if(j-1 >= 0)
        lights[i][j-1] = !lights[i][j-1];
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N = 3;
    vector<vector<int>> lights(N, vector<int>(N, 1));
    vector<vector<int>> toggles(N, vector<int>(N, 0));
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>toggles[i][j];
            toggles[i][j] %= 2;
        }
    }
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            if(toggles[i][j])
                flip(lights, i, j, N);

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++)
            cout<<lights[i][j];
        cout<<endl;
    }
    
    return 0;
}