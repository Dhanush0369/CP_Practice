#include<bits/stdc++.h>
#define int long long

using namespace std;

signed main(){
    string s;
    map<char,int> mp;
    cin>>s;
    int ans=0;

    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    bool same=false;
    int n = s.size();
    for(int i=0;i<s.size()-1;i++){
        if(mp[s[i]]>1)same=true;
        mp[s[i]]--;
        if(mp[s[i]] != n-i-1) ans += n-1-i-mp[s[i]];
        // else{
        //     ans++;
        //     break;
        // }
    }
    if(same)ans++;
    cout << ans;

    // cout<<ans;

    return 0;
}