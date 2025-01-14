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
#define fv(v,a) for(auto v:a)

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

const ll mod = 1e9 +7;

void solve(){
    ll n,m,ans=1;cin>>n>>m;
    vi r(n),c(m);
    f(i,n) cin>>r[i];
    f(i,m) cin>>c[i];

    vector<vi> g(n,vi(m,-1));
    f(i,n){
        if(r[i]==0) g[i][0]=0;
        else{
            f(j,r[i]) g[i][j]=1;
        }
    }
    f(j,m){
        if(c[j]==0) {
            if(g[0][j]==1){
                cout<<"0";
                return;
            }else{
                g[0][j]=0;
            }
            
        }else{
            f(i,c[j]){
                if(g[i][j]==0){
                    cout<<"0";
                    return;
                }else{
                    g[i][j]=1;
                }
            }
        }
    }
    f(i,n){
        if(g[i][0]==0) continue;
        else{
            int cnt=0;
            f(j,m){
                if(g[i][j]!=1) break;
                else cnt++;
            }
            if(r[i]<cnt){
                cout<<"0";
                return;
            }
        }
    }

    f(j,m){
        if(g[0][j]==0) continue;
        else{
            int cnt=0;
            f(i,n){
                if(g[i][j]!=1) break;
                else cnt++;
            }
            if(c[j]<cnt){
                cout<<"0";
                return;
            }
        }
    }

    f(i,n){
        f(j,m){
            if(g[i][j]==-1){
                if(r[i]!=j && c[j]!=i){
                    ans = (ans*2)%mod;
                }
            }
        }
    }
    cout<<ans;

}

int main() {
    fast_io();

    int t=1;
    // cin >> t;                           // Input number of test cases
    while (t--) {
        solve();
    }

    return 0;
}
