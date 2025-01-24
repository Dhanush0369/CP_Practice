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
    int q;cin>>q;
    int pos=0,sum=0;
    // queue<pii> q;
    vector<pair<int,int>> a;
    while(q--){
        int x;cin>>x;
        if(x==1){
            int y;cin>>y;
            if(a.size()==0){
                a.pb({0,y});
            }else{
                a.pb({a[a.size()-1].F + a[a.size()-1].S ,y});
            }
        }else if(x==2){
            sum+=a[pos].S;
            pos++;
        }else{
            int k;cin>>k;
            cout<<a[k+pos-1].F -sum <<endl;
        }
    }
    // cout<<sum<<endl;
    // for(auto v:a){
    //     cout<<v.F<<" ";
    // }
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
