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

int n,m;
vector<vi> g;
vi a;
int ans=0;

void dfs(int node,set<int>& s,int last,vector<int>& vis){
    
    s.insert(last);
    
    if(node==n){
        int sz=s.size();
        ans = max(ans,sz);
        return;
    }
    vis[node]=1;

    for(auto v:g[node]){
        
        if(!vis[v] && a[v]>last){
            // cout<<node<<" "<<v<<endl;
            dfs(v,s,a[v],vis);
        }
    }
    vis[node]=0;
    s.erase(last);
    return;
}


signed main() {
    fast_io();
    cin>>n>>m;
    g.resize(n+1);
    a.resize(n+1);

    fa(i,1,n+1){
        cin>>a[i];
    }
    
    f(i,m){
        int a,b;cin>>a>>b;
        g[a].pb(b);
        g[b].pb(a);
    }

    vector<int> vis(n + 1, 0);
    set<int> s;

    dfs(1,s,a[1],vis);

    cout<<ans;

    return 0;
}
