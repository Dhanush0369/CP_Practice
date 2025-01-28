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

    vector<string> a(n);

    f(i,n){
        cin>>a[i];
    }

    int x1=INT_MAX,y1=INT_MAX,x2=INT_MIN,y2=INT_MIN;
    f(i,n){
        f(j,m){
            if(a[i][j]=='#'){
                x1=min(x1,i);
                x2=max(x2,i);
                y1=min(y1,j);
                y2=max(y2,j);
            }
        }
    }
    int x,y;

    fa(i,x1,x2+1){
        fa(j,y1,y2+1){
            if(a[i][j]=='.'){
                cout<<i+1<<" "<<j+1;
                return 0;
            }
        }
    }

    return 0;
}
