#include <bits/stdc++.h>
#define int long long
using namespace std;
                  
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

bool check(int i){
    int tem=sqrt(i);

    return i==tem*tem;
}

void solve(){
    int n,sum=3;cin>>n;
    vi a;
    if(n==1){
        cout<<"-1\n";
        return;
    }
    a.pb(2);
    a.pb(1);
    
    for(int i=3;i<=n;i++){
        // cout<<sum<<endl;
        if(check(sum+i)){
            if(i==n){
                cout<<"-1\n";
                return;
            }
            a.pb(i+1);
            a.pb(i);
            sum+=i+i+1;
            i++;
        }else{
            a.pb(i);
            sum+=i;
        }
    }

    for(auto v:a){
        cout<<v<<" ";
    }
    cout<<endl;
    return;
}

signed main() {
    fast_io();
    int t;cin>>t;

    while(t--) {
        solve();
    }
    

    return 0;
}
