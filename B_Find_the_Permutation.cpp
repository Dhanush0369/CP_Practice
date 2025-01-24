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
    vector<string> a(n);
    vector<int> ans(n,0);
    f(i,n){
        cin>>a[i];
    }
 
    bool ok =true;
 
    f(i,n){
        int tem=0;
        for(auto v:a[i]){
            if(v=='1') {
                tem++;
                ok=false;
            }
        }
        ans[i]=tem;
    }
 
 
    if(ok){
        rfa(i,n,1){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
 
 
    vector<pii> ans1(n);
 
    f(i,n){
        ans1[i]={ans[i],i+1};
    }
 
    sort(ans1.begin(), ans1.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
        if (a.first != b.first) 
            return a.first < b.first; 
        return a.second > b.second;  
    });
 
 
    fa(i,0,n){
        cout<<ans1[i].S<<" ";
    }
    cout<<endl;
 
 
}
 
signed main() {
    fast_io();
 
    int t=1;
    cin >> t;                           
    while (t--) {
        solve();
    }
 
    return 0;
}