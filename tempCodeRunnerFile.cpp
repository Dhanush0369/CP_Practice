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
    int n,q;
    cin>>n>>q;
    int ans=0,l=1,r=2;
    f(i,q){
        char d;int t;cin>>d>>t;
        if(d=='L'){
            if(l<r){
                f(i,110){
                    if(l==t) break;
                    ans++;
                    l--;
                    if(l==0) l=n;
                }
            }else{
                f(i,110){
                    if(l==t) break;
                    ans++;
                    l++;
                    if(l==n+1) l=0;
                }
            }
            // cout<<ans<<endl;
        }else{
            if(l<r){
                f(i,110){
                    if(r==t) break;
                    ans++;
                    r++;
                    if(r==n+1) r=0;
                }
            }else{
                f(i,110){
                    if(r==t) break;
                    ans++;
                    r--;
                    if(r==0) r=n;
                }
            }
            // cout<<ans<<endl;
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
