#include <bits/stdc++.h>
using namespace std;

#define ll long long   
#define int long long                  
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

bool check(int k, int x, int y, int ones, int m){
    int val=0;
    val = k*k+ones-(y*(y+1)/2)-(x*(x+1)/2);
    return val<=m;
}

void solve(){
    int n, m, k;
    cin>>n>>m>>k;
    int low=1, high=m;
    int ans=1;
    while(low<=high){
        int mid=low+(high-low)/2;
        int y=mid-(n-k);
        int right=0;
        if(y<1){
            right=1-y;
            y=1;
        }
        int x=mid-k+1;
        int left=0;
        if(x<1){
            left=1-x;
            x=1;
        }
        x--, y--;
        if(check(mid, x, y, left+right, m)){
            low=mid+1;
            ans=max(ans, mid);
        }else high=mid-1;
    }
    cout<<ans<<endl;
}

int32_t main() {
    fast_io();

    int t=1;
    // cin >> t;                           
    while (t--) {
        solve();
    }

    return 0;
}
