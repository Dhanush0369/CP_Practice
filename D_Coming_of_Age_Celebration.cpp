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
    int n,cnt=0;cin>>n;
    vi a(n+1),sub(n+1);
    fa(i,1,n+1) cin>>a[i];

    fa(i,1,n+1){
        
        a[i]+=cnt;
        cnt++;
        // fa(i,1,n+1) cout<<a[i]<<" ";
        // cout<<endl;
        // cout<<cnt<<endl;
        if(a[i]<n-i){
            sub[i+a[i]]+=-1;
        }
        cnt+=sub[i];
    }

    fa(i,1,n){
        if(a[i]<n-i) a[i]=0;
        else a[i]-=n-i;
    }

    fa(i,1,n+1) cout<<a[i]<<" ";
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
