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
    int n;cin>>n;
    vi a(n),b(n-1),ok(n);
    int cnt=0,curr=n-2;

    f(i,n) cin>>a[i];
    f(i,n-1) cin>>b[i];
    
    sort(all(a));
    sort(all(b));

    rfa(i,n-1,0){
        if(a[i]<=b[curr]){
            curr--;
            ok[i]=1;
            if(curr==-1){
                cnt+=i;
                break;
            }
        }else{
            cnt++;
            if(cnt>1){
                cout<<"-1";
                return;
            }
        }
    }
    if(cnt>1){
        cout<<"-1";
        return;
    }

    f(i,n){
        if(!ok[i]){
            cout<<a[i];
            return;
        }
    }
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
