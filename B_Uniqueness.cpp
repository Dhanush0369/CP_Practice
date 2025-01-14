#include <bits/stdc++.h>
using namespace std;

#define ll long long                    
#define pb push_back                    
// #define mp make_pair                     
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
    int n;cin>>n;
    vi a(n);
    for(auto &x:a) cin>>x;
    map<int, int> cnt;
    set<int> st;
    int ans=1e9;
    for(int l=0; l<n; l++){
        for(int i=0; i<n; i++){
            cnt[a[i]]++;
            if(cnt[a[i]]>1) st.insert(a[i]);
        }
        if(st.empty()){
            ans=0;
            break;
        }
        for(int i=l; i<n; i++){
            cnt[a[i]]--;
            if(cnt[a[i]]<2 && st.find(a[i])!=st.end()) st.erase(a[i]);
            if(st.empty()){
                ans = min(ans, i-l+1);
                break;
            }
        }
        while(st.begin()!=st.end()){
            int val=*st.begin();
            st.erase(val);
        }
        while(cnt.begin()!=cnt.end()){
            int val=cnt.begin()->first;
            cnt.erase(val);
        }
    }
    cout<<ans<<endl;
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
