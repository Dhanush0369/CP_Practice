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
    int n,m,x,y;cin>>n>>m>>x>>y;

    map<pii,int> a;

    f(i,n){
        int x1,y1;cin>>x1>>y1;
        cout<<x1<<" "<<y1<<endl;
        a[mp(x1,y1)]++;
    }

    set<pii> s;

    f(i,m){
        char d;
        cin>>d;
        if(d=='L'){
            int c;cin>>c;

            x-=c;
            cout<<x<<" "<<y<<endl;
            pii ser={x,y};
            if(a.find(ser)!=a.end()){
                s.insert(ser);
            }
        }else if(d=='R'){
            int c;cin>>c;

                x+=c;
                cout<<x<<" "<<y<<endl;
                pii ser={x,y};
                if(a.find(ser)!=a.end()){
                    s.insert(ser);
                }

        }else if(d=='U'){
            int c;cin>>c;

                y+=c;
                cout<<x<<" "<<y<<endl;
                pii ser={x,y};
                if(a.find(ser)!=a.end()){
                    s.insert(ser);
                }

        }else{
            int c;cin>>c;

                y-=c;
                cout<<x<<" "<<y<<endl;
                pii ser={x,y};
                if(a.find(ser)!=a.end()){
                    s.insert(ser);
                }

        }
    }

    cout<<x<<" "<<y<<" "<<s.size();
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
