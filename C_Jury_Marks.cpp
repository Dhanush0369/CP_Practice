#include <bits/stdc++.h>
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
#define vll vector<long long>            
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
    int n,k;cin>>n>>k;
    vi a(n),b(k);
    f(i,n) cin>>a[i];
    fa(i,1,n) a[i]+=a[i-1];
    f(i,k) cin>>b[i];
    set<int> ans;
    
    f(i,n){
        int init=b[0]-a[i];
        set<int> rs;
        f(j,k){
            rs.insert(b[j]);
        }
        f(j,n){
            if(rs.count(init+a[j])){
                rs.erase(rs.find(init+a[j]));
            }
            
        }

        if(rs.empty()) ans.insert(init);
    }
    // fv(v,ans) cout<<v<<" ";
    cout<<ans.size();
}

int main() {
    fast_io();

    int t=1;
    // cin >> t;                           
    while (t--) {
        solve();
    }

    return 0;
}
