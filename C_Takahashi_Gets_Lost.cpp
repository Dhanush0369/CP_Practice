#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,q,ans=0;
    cin>>n>>m>>q;
    string s;
    cin>>s;
    char g[n+1][m+1];

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>g[i][j];
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(g[i][j]=='#') continue;
            bool ok=true;
            int x=i,y=j;
            for(int p=0;p<q;p++){
                if(s[p]=='L') y--;
                else if(s[p]=='R') y++;
                else if(s[p]=='U') x--;
                else x++;

                if(g[x][y]=='#') {
                    ok=false;break;
                }
            }
            if(ok) ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}