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
    int n,m,q;
    cin>>n>>m>>q;
    vector<set<int>> g1(n),g2(m);
    f(i,n){
        f(j,m){
            g1[i].insert(j);
            g2[j].insert(i);
        }
    }

    auto erase = [&](int i,int j){
        g2[j].erase(i);
        g1[i].erase(j);
    };

    while(q--){
        int x,y;
        cin>>x>>y;
        x--;y--;

        if(g1[x].count(y)){
            erase(x,y);
            continue;
        }

        {
            //UP
            auto it = g2[y].lower_bound(x);
            if(it!=g2[y].begin()) erase(*prev(it),y);
        }

        {
            //Down
            auto it = g2[y].lower_bound(x);
            if(it!=g2[y].end()) erase(*it,y);
        }

        {
            //Left
            auto it1 = g1[x].lower_bound(y);
            if(it1!=g1[x].begin()) erase(x,*prev(it1));
        }

        {
            //right
            auto it1 = g1[x].lower_bound(y);
            if(it1!=g1[x].end()) erase(x,*it1);
        }
    }
    int ans=0;
    for(auto v:g1){
        ans+=v.size();
    }
    cout<<ans;
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
