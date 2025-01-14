#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long                   // shorthand for long long
#define pb push_back                    // shorthand for push_back
#define mp make_pair                    // shorthand for make_pair
#define all(v) v.begin(), v.end()       // shorthand for range all elements
#define F first                         // shorthand for pair.first
#define S second                        // shorthand for pair.second
#define endl '\n'                       // shorthand for newline

// Shortcuts for loops
#define f(i, a, b) for (int i = a; i < b; i++)          // loop from a to b-1
#define rf(i, a, b) for (int i = a; i >= b; i--)        // loop from a to b (reverse)

// Shortcuts for common containers
#define vi vector<int>                  // shorthand for vector of ints
#define vc vector<char>
#define vll vector<long long>           // shorthand for vector of long longs
#define si set<int>                     // shorthand for set of ints
#define mii map<int, int>               // shorthand for map of int to int

// Fast I/O
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

signed main() {
    fast_io();
    int q;
    cin>>q;
    multiset<int> s;
    int growth=0;
    while(q--){
        int x;
        cin>>x;
        if(x==1){
            s.insert(0-growth);
        }else if(x==2){
            int t;
            cin>>t;
            growth+=t;
        }else{
            int h;
            cin>>h;
            int v = h-growth;
            auto x= s.lower_bound(v);
            int cnt = distance(x,s.end());

            cout<<cnt<<endl;
            s.erase(x,s.end());
        }
    }

    return 0;
}
