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
    vi a(n),t(n);

    f(i,n){
        cin>>a[i]>>t[i];
    }
    int ant1=0,ant2=0;
    f(i,n){
        int tem= t[i]/15;

        if(tem%2==1) ant1+=a[i];
        else ant2+=a[i];
    }

    cout<<max(ant1,ant2);

    return 0;
}
