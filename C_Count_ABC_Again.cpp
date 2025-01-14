#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n,q,ans=0;
    cin>>n>>q;
    string s;
    cin>>s;

    
    for(int i=0;i<n-2;i++){
        if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C'){
            ans++;
        }
    }

    while(q--){
        int x;
        char c;
        cin>>x>>c;
        x--;
        for(int k=0;k<3;k++){
            int dx = x-k;
            if(dx<0) break;
            if(dx+2>=n) continue;
            if(s[dx]=='A' && s[dx+1]=='B' && s[dx+2]=='C') ans--;
        }
        s[x]=c;
        for(int k=0;k<3;k++){
            int dx = x-k;
            if(dx<0) break;
            if(dx+2>=n) continue;
            if(s[dx]=='A' && s[dx+1]=='B' && s[dx+2]=='C') ans++;
        }

        cout<<ans<<endl;
    }
}

int main(){
    solve();

    return 0;
}