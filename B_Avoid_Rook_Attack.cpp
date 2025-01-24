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
    vector<vector<char>> a(9,vector<char>(9));
    vi r(9),c(9);

    fa(i,1,9){
        fa(j,1,9) {
            cin>>a[i][j];
            if(a[i][j]=='#') {
                r[i]++;c[j]++;
            }
        }
    }
    int ans=0;
    fa(i,1,9){
        fa(j,1,9) {
            if(a[i][j]=='.' && r[i]==0 && c[j]==0) ans++;
        }
    }
    cout<<ans;

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
