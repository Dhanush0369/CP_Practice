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
    int n,q;cin>>n>>q;

    vi pos(n+1),a(n+1);

    fa(i,1,n+1) {
        a[i]=i;
        pos[i]=i;
    }

    while(q--){
        int x;cin>>x;
        if(x==1){
            int f,t;
            cin>>f>>t;
            int p1=f;
            while(pos[f]!=p1){
                f=pos[f];
            }
            a[pos[f]]=t;
        }else if(x==2){
            int f,t,p1,p2;cin>>f>>t;
            p1=f,p2=t;
            while(pos[f]!=p1){
                f=pos[f];
            }
            while(pos[t]!=p2){
                t=pos[t];
            }
            swap(pos[f],pos[t]);
        }else{
            int b;cin>>b;
            cout<<pos[a[b]]<<endl;
        }
    }
    

    return 0;
}
