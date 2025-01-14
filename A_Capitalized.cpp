#include<bits/stdc++.h>

using namespace std;

int32_t solve(){
    string s;
    cin>>s;
    if(islower(s[0])) {
        cout<<"No\n";
        return 0;
    }

    for(int i=1;i<s.size();i++){
        if(!islower(s[i])){
            cout<<"No\n";
            return 0;
        }
    }
    cout<<"Yes\n";
    return 0;
}

int main(){
    
    solve();
    return 0;
}