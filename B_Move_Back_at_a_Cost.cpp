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
    int n;
    cin>>n; 
    vi a(n);
    for(auto &x:a) cin>>x;
    int mn=INT_MAX;
    int ind=-1;
    for(int i=0; i<n; i++){
        if(a[i]<mn){
            mn=a[i];
            ind=i;
        }
    }
    set<pair<int,int>> left, right;
    vi ans;
    ans.pb(mn);
    for(int i=0; i<ind; i++){
        left.insert({a[i], i});
    }
    for(int i=ind+1; i<n; i++){
        right.insert({a[i], i});
    }
    while(!right.empty()){
        auto x=*left.begin();
        auto y=*right.begin();
        int l=(left.size()>0?x.first:INT_MAX-1);
        int r=y.first;
        if(r<=l+1){
            for(int i=ind+1; i<y.second; i++){
                left.insert({a[i], i});
                right.erase({a[i], i});
            }
            ind=y.second;
            ans.pb(r);
            right.erase(y);
        }else{
            for(int i=ind+1; i<n; i++){
                left.insert({a[i], i});
                right.erase({a[i], i});
            }            
            break;
        }
    }
    while(!left.empty()){
        auto x=*left.begin();
        int l=x.first;
        left.erase(x);
        ans.pb(l+1);
    }
    for(auto v:ans) cout<<v<<" ";
    cout<<endl;
}

int main() {
    fast_io();

    int t=1;
    cin >> t;                           // Input number of test cases
    while (t--) {
        solve();
    }

    return 0;
}
