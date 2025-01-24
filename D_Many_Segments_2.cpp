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
    int n,m;cin>>n>>m;
    vector<pii> a;
    f(i,n) {
        int x,y;cin>>x>>y;
        a.pb({x,y});
    }
    int l=1,ans=0,sub=0;
    f(i,n){
        if(a[i].F==a[i].S){
            sub++;
        }
        if(a[i].S-1<=l) continue;
        if(a[i].S-1 >m){
            ans += m-l;
        }else{
            ans += a[i].S-1-l;
        } 
        l=a[i].F+1; 
    }

     cout<<ans+m-sub;
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
