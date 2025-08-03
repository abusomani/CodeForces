#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;
vector<string> days = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int pages;
    cin>>pages;
    vector<int> V(7);
    for(int i=0; i<7; i++)cin>>V[i];
    int idx = 0;
    while(pages){
        if(pages <= V[idx]){
            cout<<idx+1;
            break;
        }
        pages -= V[idx];
        idx = (idx + 1)%7;
    }
    return 0;
}