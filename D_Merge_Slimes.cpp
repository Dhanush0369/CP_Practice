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
    int n;cin>>n;
    map<int,int> m;
    set<int> s;
    f(i,n){
        int a,b;cin>>a>>b;
        s.insert(a);
        m[a]+=b;
    }

    while(!s.empty()){
        int st=*s.begin();
        s.erase(s.begin());
        if(m[st]>=2){
            int tem=m[st]/2;
            m[2*st]+=tem;
            m[st]-=tem*2;
            s.insert(2*st);
        }
    }
    
    // for(auto v:m){
    //     if(v.S>=2){
    //         int tem = v.S/2;
    //         m[2*v.S]+=tem;
    //         m[v.F]-= tem*2;
    //     }
    // }

    int ans=0;
    for(auto v:m){
        ans+=v.S;
    }

    cout<<ans;

    return 0;
}
