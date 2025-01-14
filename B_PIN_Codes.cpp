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
    vi cnt(10);
    vector<string> a(n);
     map<string,int> p;
     int ans=0;
    f(i,n) {
        cin>>a[i];
        p[a[i]]++;
        cnt[a[i][3]-'0']++;
    }
    ans=n-p.size();
    int ok=0;
    f(i,n){
        if(p[a[i]]>1){
            ok++;
            p[a[i]]--;
            f(j,10){
                if(cnt[j]==0){
                    a[i][3]='0'+j;
                    cnt[j]=1;
                    break;
                }
            }
            
        }
        if(ok==ans) break;
    }
    cout<<ans<<endl;
    f(i,n){
        cout<<a[i]<<endl;
    }
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
