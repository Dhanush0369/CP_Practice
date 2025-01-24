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
    int n,m,x,y;cin>>n>>m>>x>>y;
    vector<vector<char>> a(n+1,vector<char>(m+1));

    fa(i,1,n+1){
        fa(j,1,m+1) {
            cin>>a[i][j];
        }
    }
    string tr;cin>>tr;
    set<pii> s;
    for(auto v:tr){
        if(v=='L'){
            if(y-1<=0) continue;
            if(a[x][y-1]!='#'){
                y--;
                
                if(a[x][y]=='@') s.insert({x,y});
            }
        }else if(v=='R'){
            if(y+1>m) continue;
            if(a[x][y+1]!='#'){
                y++;
                
                if(a[x][y]=='@') s.insert({x,y});
            }
        }else if(v=='U'){
            if(x-1<=0) continue;
            if(a[x-1][y]!='#'){
                x--;
                
                if(a[x][y]=='@') s.insert({x,y});
            }
        }else{
            if(x+1>n) continue;
            if(a[x+1][y]!='#'){
                x++;
                
                if(a[x][y]=='@') s.insert({x,y});
            }
        }
    }

    // for(auto v:s){
    //     cout<<v.F<<" "<<v.S<<endl;
    // }

    cout<<x<<" "<<y<<" "<<s.size();
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
