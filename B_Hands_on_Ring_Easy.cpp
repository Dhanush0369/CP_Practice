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

int num(int n,int from,int ng,int to){
    if(from>to) swap(from,to);

    if(from<ng && ng<to){
        return n+from-to;
    }else return to-from;
}

void solve(){
    int n,q;
    cin>>n>>q;
    int ans=0,l=1,r=2;
    f(i,q){
        char d;int t;cin>>d>>t;
        if(d=='L'){
            ans+= num(n,l,r,t);
            l=t;
        }else{
            ans+= num(n,r,l,t);
            r=t;
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
