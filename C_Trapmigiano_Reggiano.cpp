#include <bits/stdc++.h>
#define int long long
using namespace std;
                  
#define pb push_back                    
#define mp make_pair                     
#define all(v) v.begin(), v.end()        
#define F first                          
#define S second                         
#define endl '\n'                        

// Shortcuts for loops
#define f(i, a) for (int i = 0; i< a; i++)
#define fa(i, a, b) for (int i = a; i < b; i++)          
#define rfa(i, a, b) for (int i = a; i >= b; i--)       

// Shortcuts for common containers
#define vi vector<int>                            
#define si set<int>                      
#define mii map<int, int>                

// Shortcuts for pairs and vector of pairs
#define pii pair<int, int>                

// Fast I/O
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

void dfs(int en,vector<vi>& g,vi& ans,int par){
    for(auto v:g[en]){
        if(v!=par){
            dfs(v,g,ans,en);
        }
    }
    ans.pb(en);
    return;
}


void solve(){
    int n,l,r;cin>>n>>l>>r;
    vector<vi> g(n+1);
    vi ans;
    for(int i=0;i<n-1;i++){
        int u,v;cin>>u>>v;
        g[u].pb(v);
        g[v].pb(u);
    }

    dfs(r,g,ans,0);

    for(auto v:ans){
        cout<<v<<" ";
    }
    cout<<endl;
    return;
}

signed main() {
    fast_io();

    int t;cin>>t;
    while(t--) solve();

    return 0;
}
