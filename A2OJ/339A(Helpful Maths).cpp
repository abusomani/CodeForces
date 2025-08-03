#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s, res, tmp;
    cin>>s;
    stringstream ss(s);
    vector<string> nums;
    while(getline(ss, tmp, '+'))
        if(tmp != "")nums.push_back(tmp);
    sort(nums.begin(), nums.end());
    for(auto n: nums)res += n + "+";
    res.pop_back();
    cout<<res;
    return 0;
}