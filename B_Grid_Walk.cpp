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
    int n,m,s,e;
    cin>>n>>m>>s>>e;
    char a[n+1][m+1];
    fa(i,1,n+1) fa(j,1,m+1) cin>>a[i][j];
    string t;
    cin>>t;
    f(i,t.size()){
        if(t[i]=='U'){
            if(s-1>0 && a[s-1][e]=='.') s=s-1;
        }else if(t[i]=='D'){
            if(s+1<=n && a[s+1][e]=='.') s=s+1;
        }else if(t[i]=='L'){
            if(e-1>0 && a[s][e-1]=='.') e=e-1;
        }else{
            if(e+1<=m && a[s][e+1]=='.') e=e+1;
        }
    }
    cout<<s<<" "<<e;
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
