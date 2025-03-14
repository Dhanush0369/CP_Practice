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
    vi a(n+1,1),pos(n+1);

    f(i,n+1) pos[i]=i;

    int cnt=0;

    while(q--){
        int x;cin>>x;

        if(x==1){
            int b,en;cin>>b>>en;
            if(a[pos[b]]==2) cnt--;

            a[pos[b]]--;

            if(a[en]==1) cnt++;
            pos[b]=en;
            a[en]++;

            // fa(i,1,n+1){
            //     cout<<a[i]<<" ";
            // }
            
            // cout<<endl;
            // cout<<cnt<<endl;
        }else{
            cout<<cnt<<endl;
        }
    }

    return 0;
}
