#include <bits/stdc++.h>
using namespace std;

#define ll long long                   // shorthand for long long
#define pb push_back                    // shorthand for push_back
#define mp make_pair                    // shorthand for make_pair
#define all(v) v.begin(), v.end()       // shorthand for range all elements
#define F first                         // shorthand for pair.first
#define S second                        // shorthand for pair.second
#define endl '\n'                       // shorthand for newline

// Shortcuts for loops
#define f(i, a) for (int i = 0; i< a; i++)
#define fa(i, a, b) for (int i = a; i < b; i++)          // loop from a to b-1
#define rfa(i, a, b) for (int i = a; i >= b; i--)        // loop from a to b (reverse)

// Shortcuts for common containers
#define vi vector<int>                  // shorthand for vector of ints
#define vll vector<long long>           // shorthand for vector of long longs
#define si set<int>                     // shorthand for set of ints
#define mii map<int, int>               // shorthand for map of int to int

// Shortcuts for pairs and vector of pairs
#define pii pair<int, int>              // shorthand for pair of ints

// Fast I/O
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    vi ans(n);
    f(i,n) cin>>a[i];
    f(i,m) cin>>b[i];
    ans[0]=a[0];
    fa(i,1,n){
      ans[i] = min(ans[i-1],a[i]);  
    }
    reverse(ans.begin(),ans.end());
    f(i,m){
        int x= upper_bound(ans.begin(),ans.end(),b[i])-ans.begin();
        x--;
        if(x<0) cout<<"-1"<<endl;
        else cout<<n-x<<endl;
        

        // if(a[x]>b[i]) cout<<"-1\n";
        // else cout<<n-x<<endl;
    }
}

int main() {
    fast_io();

    int t=1;
    // cin >> t;                           // Input number of test cases
    while (t--) {
        solve();
    }

    return 0;
}
