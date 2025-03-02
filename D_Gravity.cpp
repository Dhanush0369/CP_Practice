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


signed main() {
    fast_io();

    int n,w;cin>>n>>w;
    map<int,int> m;
    vi t(n+1,1e9+7);
    int l=1e6;
    vector<set<pii>> a(w+1);

    fa(i,1,n+1){
        int x,y;cin>>x>>y;
        a[x].insert({y,i});
    }

    fa(i,1,w+1){
        int z=a[i].size();
        l=min(l,z);
        
    }

    int prev=0;
    f(x,l){
        int time=0;
        fa(i,1,w+1){
            pii tem = *(a[i].begin());
            a[i].erase(tem);
            t[tem.S]=x;
            tem.F -= prev;
            if(tem.F<0) tem.F=0;
            time = max(time,tem.F);

        }
        prev+=time;
        m[x]=prev;
    }


    int q;cin>>q;

    // f(i,n+1){
    //     cout<<t[i]<<" ";
    // }

    // for(auto v:m){
    //     cout<<v.F<<" "<<v.S<<endl;
    // }

    f(i,q){
        int x,y;cin>>x>>y;
        if(t[y]==1e9+7) cout<<"Yes\n";
        else if(x<m[t[y]]) cout<<"Yes\n";
        else cout<<"No\n";
    }

    return 0;
}
