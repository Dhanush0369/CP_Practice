#include <bits/stdc++.h>
#define int long long
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
#define si set<int>                      
#define mii map<int, int>                

// Shortcuts for pairs and vector of pairs
#define pii pair<int, int>                

// Fast I/O
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}



signed main() {
    fast_io();

    int n,t;cin>>n>>t;
    vector<vi> g(n+1);
    vi exist(n+1),dis(n+1,1e9),vis(n+1);

    f(i,t){
        int a,b;cin>>a>>b;
        g[a].pb(b);
        if(b==1) exist[a]=1;
    }

    queue<int> q;
    q.push(1);
    dis[1]=0;
    vis[1]=1;
    while(!q.empty()){
        int node =q.front();q.pop();
        for(auto v:g[node]){
            if(!vis[v]) {
                q.push(v);
            dis[v]=min(dis[v],1+dis[node]);
            vis[v]=1;
            }
            
        }
    }

    int ans=1e9;

    fa(i,2,n+1){
        if(dis[i]!=1e9){
            if(exist[i]){
                ans = min(ans,1+dis[i]);
            }
        }
    }
    cout<<((ans!=1e9) ? to_string(ans):"-1");

    return 0;
}
