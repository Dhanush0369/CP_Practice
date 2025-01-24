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

int n,m;

int dx[]={2,1,-1,-2,-2,-1,1,2};
int dy[]={1,2,2,1,-1,-2,-2,-1};

bool check(int i,int j){
    if(i<=0 || i>n ||j <=0 || j>n){
        return false;
    }
    return true;
}

void solve(){
    cin>>n>>m;
    set<pii> s;
    while(m--){
        int x,y;cin>>x>>y;
        s.insert(mp(x,y));
        f(i,8){
            int x1=x+dx[i],y1=y+dy[i];
            if(check(x1,y1)) {
                s.insert(mp(x1,y1));
            }
        }
    }
    cout<<n*n -s.size();
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
