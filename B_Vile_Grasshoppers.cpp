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
 
int p,n;
 
bool check(int x){
    
    for(int j=2;j<=p && j*j<=x;j++){
            if(x%j==0) {
                return false;
            }
        }
 
    return true;
}
 
void solve(){
    
    cin>>p>>n;
    for(int i=n;i>p;i--){
        if(check(i)){
            cout<<i;
            return;
        }
    }
    
    cout<<"-1";
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