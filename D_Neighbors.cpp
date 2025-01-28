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

vector<vi> g;
vi vis;

bool dfs(int node,int par){
    vis[node]=1;

    for(auto v:g[node]){
        if(v==par) continue;
        if(!vis[v]){
            if(dfs(v,node)){
                return true;
            }
        }else return true;
    }
    return false;
}


signed main() {
    fast_io();
    int n,q;cin>>n>>q;
    g.resize(n+1);
    vis.resize(n+1);

    f(i,q){
        int a,b;cin>>a>>b;
        if(a==b) continue;

        g[a].pb(b);
        g[b].pb(a);
    }

    
    for(int i=1;i<=n;i++){
        if(g[i].size()>=3){
            cout<<"No";
            return 0;
        }
    }



    for(int i=1;i<=n;i++){
        if(!vis[i]){
            if(dfs(i,0)){
                cout<<"No";
                return 0;
            }
        }
    }

    cout<<"Yes";

    return 0;
}
