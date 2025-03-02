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

    int n,m;cin>>n>>m;

    vi a(m),p(n),ok(n);
    vector<string> d(n);
    int ans=0;
    f(i,m) cin>>a[i];

    f(i,n) cin>>d[i];

    f(i,n){
        int tem=0;
        f(j,m){
            if(d[i][j]=='o'){
                tem+=a[j];
            }
        }
        p[i]=tem+i;
        ans=max(ans,p[i]);
        // cout<<p[i]<<" ";
    }


    f(i,n){
        if(p[i]==ans) {
            ok[i]=0;
            continue;
        }
        multiset<int> s;
        f(j,m){
            if(d[i][j]=='x'){
                s.insert(-a[j]);
            }
        }
        int add = ans-p[i];

        int cnt=0;
        while(!s.empty()){
            int st=*s.begin();
            s.erase(s.begin());
            st*=-1;
            // cout<<i<<" "<<st<<endl;
            add-=st;
            cnt++;
            if(add<0){
                break;
            }
        }
        ok[i]=cnt;
    }

    f(i,n){
        cout<<ok[i]<<endl;
    }

    return 0;
}
