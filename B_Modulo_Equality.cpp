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
    vi a(n),b(n);
    f(i,n) cin>>a[i];
    f(i,n) cin>>b[i];   

    vi pos(n);
    sort(all(b));
    f(i,n){
        int add = (b[0]-a[i]+m)%m;
        pos[i]=add;
    }

    sort(all(pos));
    for(int j=0;j<n;j++){
        int v = pos[j];

        vi c(n);
        f(i,n){
            c[i] = (a[i]+v)%m;

        }
        sort(all(c));
        bool ok =true;
        f(i,n){
            if(c[i]!=b[i]) {
                ok=false;
                break;
            }
        }
        if(ok){
            cout<<v;
            return;
        }
    }


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
