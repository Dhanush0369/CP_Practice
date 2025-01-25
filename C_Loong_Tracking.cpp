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

void solve(){
    int n,q;cin>>n>>q;
    vector<pii> a;
    a.pb({0,0});
    rfa(i,n,1){
        a.pb(mp(i,0));
    }
    int z=1,y=0;
    while(q--){
        int x;cin>>x;
        if(x==1){
            char d;cin>>d;
            if(d=='U'){
                y++;
            }else if(d=='D'){
                y--;
            }else if(d=='L'){
                z--;
            }else{
                z++;
            }
            a.pb(mp(z,y));
        }else{
            int y;cin>>y;
            int pos = a.size()-y;
            cout<<a[pos].F<<" "<<a[pos].S<<endl;
        }
    }
    // for(auto v:a){
    //     cout<<v.F<<" "<<v.S<<endl;
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
