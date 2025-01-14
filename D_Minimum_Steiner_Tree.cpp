#include <bits/stdc++.h>
using namespace std;

#define ll long long                   // shorthand for long long
#define pb push_back                    // shorthand for push_back
#define mp make_pair                    // shorthand for make_pair
#define all(v) v.begin(), v.end()       // shorthand for range all elements
#define F first                         // shorthand for pair.first
#define S second                        // shorthand for pair.second
#define endl '\n'                       // shorthand for newline

// Shortcuts for loops
#define f(i, a) for (int i = 0; i< a; i++)
#define fa(i, a, b) for (int i = a; i < b; i++)          // loop from a to b-1
#define rfa(i, a, b) for (int i = a; i >= b; i--)        // loop from a to b (reverse)

// Shortcuts for common containers
#define vi vector<int>                  // shorthand for vector of ints
#define vll vector<long long>           // shorthand for vector of long longs
#define si set<int>                     // shorthand for set of ints
#define mii map<int, int>               // shorthand for map of int to int

// Shortcuts for pairs and vector of pairs
#define pii pair<int, int>              // shorthand for pair of ints

// Fast I/O
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

vector<vi> g;
vector<bool> q,final;

int cnt=0;

bool dfs(int node,bool ok){
    if(q[node]) {
        final[node]=true;
        ok=true;
    }

    for(auto v:g[node]){
        if(dfs(v,false)){
            final[v]=true;
            ok=true;
        }
    }

    return ok;
}

int main() {
    fast_io();

    int n,k;cin>>n>>k;
    g.resize(n+1);
    q.resize(n+1);
    final.assign(n+1,false);

    f(i,n){
        int x,y;
        cin>>x>>y;
        g[x].pb(y);
    }

    f(i,k){
        int x;cin>>x;
        q[x]=true; 
    }
    dfs(1,false);
    fa(i,1,n+1){
        if(final[i]) cnt++;
    }
    cout<<cnt;
    return 0;
}
