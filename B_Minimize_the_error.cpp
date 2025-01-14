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
    int n,k1,k2;cin>>n>>k1>>k2;

    vi a(n),b(n);

    f(i,n) cin>>a[i];
    f(i,n) cin>>b[i];

    priority_queue<int> q;
    f(i,n){
        q.push(abs(a[i]-b[i]));
    }

    f(i,k1){
        int tem = q.top();
            q.pop();
            tem--;
            q.push(abs(tem));
    }

    f(i,k2){
        int tem = q.top();
            q.pop();
            tem--;
            q.push(abs(tem));
    }


    int ans=0;

    while(!q.empty()){
        int tem=q.top();
        ans +=  tem*tem;
        q.pop();
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
