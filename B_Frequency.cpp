#include<bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin>>s;
    int cnt=0;
    char ans;
    map<char,int> mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    for(auto v:mp){
        if(v.second>cnt){
            cnt=v.second;
            ans = v.first;
        }
    }
    cout<<ans<<endl;
}

int main(){
    solve();

    return 0;
}