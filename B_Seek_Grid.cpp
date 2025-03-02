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
    vector<string> s(n),t(m);

    f(i,n){
        cin>>s[i];
    }

    f(i,m) cin>>t[i];

    f(i,n){
        f(j,n){
            if(((i+m)>n) || ((j+m) >n)) continue;
            vector<string>  tem(m);
            fa(x,i,i+m){
                fa(y,j,j+m){
                    tem[x-i]+=s[x][y];
                }
            }
                bool ok=true;
            for(int z=0;z<m;z++){
                // cout<<tem[z]<<endl;
                if(t[z]!=tem[z]){
                    ok=false;
                    break;
                }
            }

            if(ok){
                cout<<i+1<<" "<<j+1;
            }
        }
    }

    return 0;
}
