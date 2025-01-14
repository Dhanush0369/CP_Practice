#include <bits/stdc++.h>
using namespace std;
 
#define ll long long                    
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
#define fv(v,a) for(auto v:a)
 
// Shortcuts for common containers
#define vi vector<int>                   
#define vll vector<long long>            
#define si set<int>                      
#define mii map<int, int>                
 
// Shortcuts for pairs and vector of pairs
#define pii pair<int, int>                
 
// Fast I/O
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
ll mod=1e9+7;
 
vector<vi> g;
vi vis;
 
int dfs(int node){
    vis[node]=1;
    int cnt=1;
    for(auto v:g[node]){
        if(!vis[v]){
            cnt+=dfs(v);
        }
    }
    return cnt;
}
 
void solve(){
    int n,k;cin>>n>>k;
    g.resize(n+1);
    vis.resize(n+1);
 
    f(i,n){
        int a,b,c;
        cin>>a>>b>>c;
        if(c==0){
            g[a].pb(b);
            g[b].pb(a);
        }
    }
    ll ans1=1,ans2=1;
    f(i,k){
        ans1 = (ans1%mod*n%mod)%mod;
    }
    fa(i,1,n+1){
        if(!vis[i]){
            ll cnt=dfs(i);
            f(i,k){
                ans2 = (ans2%mod*cnt%mod)%mod;
            }
            ans1-=ans2;
            ans1+=mod;
            ans1%=mod;
            ans2=1;
        }
    }
    cout<<ans1;
}
 
int main() {
    fast_io();
 
    int t=1;
    // cin >> t;                           
    while (t--) {
        solve();
    }
 
    return 0;
}