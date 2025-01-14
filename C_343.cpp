#include<bits/stdc++.h>
#define int long long

using namespace std;

bool check(int i){
    string s=to_string(i);
    string t=s;
    reverse(t.begin(),t.end());

    return t==s;
}

signed main(){
    int n;
    cin>>n;
    int ans=0;

    for(int i=1;i*i*i<=n;i++){
        if(check(i*i*i)) ans=i*i*i;
    }
    cout<<ans;
    return 0;
}