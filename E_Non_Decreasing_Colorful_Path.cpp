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


signed main() {
    fast_io();
    int n,m;
    cin>>n>>m;
    vector<vector<pii>> g(n+1);
    vi dp(n+1),cost(n+1);

    fa(i,1,n+1){
        cin>>cost[i];
    }
    
    f(i,m){
        int a,b;cin>>a>>b;
        if(cost[a]>cost[b]){
            g[b].pb(mp(a,1));
        }else if(cost[a]<cost[b]){
            g[a].pb(mp(b,1));
        }else{
            if(a<b) swap(a,b);
            g[b].pb(mp(a,0));
        }
    }

    

    queue<int> q;

    q.push(1);
    dp[1]=1;
    while(!q.empty()){
        int ele = q.front();q.pop();

        for(auto v:g[ele]){
            dp[v.F]=max(dp[v.F],dp[ele]+v.S);
            q.push(v.F);
        }
    }

    // for(int i=1;i<=n;i++){
    //     for(auto v:g[i]){
    //         cout<<i<<" "<<v.F<<" "<<v.S<<endl;
    //     }

    // }

    // for(int i=1;i<=n;i++) cout<<dp[i]<<" ";
    // cout<<endl;

    cout<<dp[n];

    return 0;
}
