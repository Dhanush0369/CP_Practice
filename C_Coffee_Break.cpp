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
    int n,m,d;cin>>n>>m>>d;d++;
    set<pii> p;
    vi ans(n);
    f(i,n){
        int x;cin>>x;
        p.insert({x,i});
    }
    int cnt=0;
    while(!p.empty()){
        cnt++;
        auto [v,pos]=*p.begin();
        ans[pos]=cnt;
        p.erase({v,pos});
        while(true){
            auto it = p.lower_bound({v+d,0});
            if(it==p.end()) break;
            else{
                pos = it->second;
                ans[pos]=cnt;
                v=it->first;
                p.erase(it);
                
            }
        }
    }
    cout<<cnt<<endl;
    f(i,n){
        cout<<ans[i]<<" ";
    }
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
