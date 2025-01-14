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
    int n;cin>>n;
    vi a(n),b(n);
    f(i,n) cin>>a[i];
    f(i,n) cin>>b[i];

    f(i,n) a[i]-=b[i];

    int pos=-1,cnt=0;
    f(i,n){
        if(a[i]<0) {
            cnt++;
            pos=i;
        }
    }
    if(cnt>1) {
        cout<<"NO\n";
        return;
    }

    if(cnt==0){
        cout<<"YES\n";
        return;
    }
    int val=INT_MAX;
    f(i,n){
        if(i!=pos){
            val =min(val,a[i]);
        }
    }

    if(val>=abs(a[pos])) cout<<"YES\n";
    else cout<<"NO\n";
}

int main() {
    fast_io();

    int t=1;
    cin >> t;                           
    while (t--) {
        solve();
    }

    return 0;
}
