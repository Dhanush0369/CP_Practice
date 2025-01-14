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

int n,m,cnt=1;
vi v;
vector<vi> ans;

void rec(vi a){
    int sz = a.size();
    if(sz==n){
        ans.pb(a);
        return;
    }

    for(int x= (sz==0 ? 1:a.back()+10);x<=m-10*(n-sz-1);x++){
        vi nx=a;
        nx.pb(x);
        rec(nx);
    }

    return;
}

int main() {
    fast_io();
    cin>>n>>m;
    rec({});
    cout<<ans.size()<<endl;
    for(auto v:ans) {
        for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    }
    return 0;
}
