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
    vector<vector<vector<int>>> g(n+1);
    vi ans(n+1);
    f(i,n-2){
        vi a(3);
        cin>>a[0]>>a[1]>>a[2];
        g[a[0]].push_back(a);
        g[a[1]].push_back(a);
        g[a[2]].push_back(a);
    }
    int st=-1,x=-1,y=-1;   
     
    fa(i,1,n+1){
        if(g[i].size()==1){
            st=i;
            for(auto a:g[i]){
                f(j,3){
                    if(a[j]!=i){
                    if(x==-1){
                        x=a[j];
                    }else{
                        y=a[j];
                    }
                }
                }
            }
            break;
        }
    }
    ans[0]=st;
    
    for(auto v:g[x]){
        if(find(all(v),y)!=v.end() && find(all(v),st)==v.end()){
            for(auto z:v){
                if(z!=x && z!=y){
                    ans[3]=z;
                }
            }
        }
    }

    for(auto v:g[ans[3]]){
        if(find(all(v),x)!=v.end() && find(all(v),y)==v.end()){
            ans[2]=x;
            ans[1]=y;
        }else if(find(all(v),x)==v.end() && find(all(v),y)!=v.end()){
            ans[2]=y;
            ans[1]=x;
        }
    }


    fa(i,3,n-1){
        for(auto v:g[ans[i]]){
            if(find(all(v),ans[i-1])!=v.end() && find(all(v),ans[i-2])==v.end()){
                for(auto z:v){
                if(z!=ans[i] && z!=ans[i-1]){
                    ans[i+1]=z;
                }
            }
            }
        }
    }

    f(i,n){
        cout<<ans[i]<<" ";
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
