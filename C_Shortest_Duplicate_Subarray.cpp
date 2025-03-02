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
    vi a(n);

    f(i,n) cin>>a[i];

    unordered_map<int,int> m;

    int head=-1,tail=0,ans=1e9;

    while(tail<n){
        while(head+1<n && m.find(a[head+1])==m.end()){
            head++;

            m[a[head]]++;
        }

        if(head!=n-1){
            ans = min(ans,head-tail+2);
        }

        m[a[tail]]--;
        if(m[a[tail]]==0) m.erase(a[tail]);
        tail++;

    }
    
    if((ans==1e9)) cout<<"-1\n";
    else cout<<ans;

    return 0;
}
