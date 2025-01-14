#include<bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin>>s;
    int n=s.size(),x;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='.') {
            x=i;
            break;
        }
    }

    string ans;
    ans = s.substr(x+1,n-x-1);
    cout<<ans<<endl;
}

int main(){
    solve();

    return 0;
}