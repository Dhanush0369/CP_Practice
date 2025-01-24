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

void solve(){
    int n,l,r;cin>>n>>l>>r;
    int mod = 1e9+7;
    vi cnt(3,0);
    vector<vector<int>> dp(n+1,vi(3,0));

    cnt[0] = r/3 - (l-1)/3;
    cnt[1] = (r+2)/3 - (l-1+2)/3 ;
    cnt[2] = (r+1)/3 - (l-2+2)/3 ;

    dp[0][0]=1;


    f(i,n){
        f(j,3){
            f(k,3){
                dp[i+1][(j+k)%3] += dp[i][j]*cnt[k];
                dp[i+1][(j+k)%3] %= mod;
            }
        }
    }
    cout<<dp[n][0];
    // fa(i,0,n+1){
    //     f(j,3){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}

signed main() {
    fast_io();

    int t=1;
    // cin >> t;                           
    while (t--) {
        solve();
    }

    return 0;
}
