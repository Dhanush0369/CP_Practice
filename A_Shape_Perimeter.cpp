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
    int n,m;cin>>n>>m;
    int x=m,y=m,currx=m,curry=m,ans1=m,ans2=m;
    cin>>x>>y;
    currx+=x;curry+=y;
    n--;
    while(n--){
        int x1,y1;cin>>x1>>y1;
        x +=x1;y +=y1;
        ans1 += x+m - currx;
        ans2 += y+m -curry; 
        currx = x+m;
        curry = y+m;
    }

    ans1 += ans2;

    cout<<2*ans1<<endl;

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
