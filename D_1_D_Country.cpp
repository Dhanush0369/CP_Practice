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
    int n; cin>>n;
    vi a(n), b(n);
    
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    vector<pair<ll,ll>> c;
    map<ll, ll> mp;
    for(int i=0; i<n; i++){
        mp[a[i]]+=b[i];
    }
    for(auto v:mp){
        ll x=v.first;
        ll num=v.second;
        c.push_back({x, num});
    }
    sort(c.begin(), c.end());
    vector<ll> pref(n,0);
    vector<ll> arr;
    ll sum=0;
    for(int i=0; i<c.size(); i++){
        arr.push_back(c[i].F);
        sum += c[i].S;
        pref[i]=sum;
    }
    // for(auto v:pref) cout<<v<<" ";
    // cout<<endl;
    int q;
    cin>>q;
    while(q--){
        int x, y;
        cin>>x>>y;
        int l=lower_bound(arr.begin(), arr.end(), x)-arr.begin();
        int r=upper_bound(arr.begin(), arr.end(), y)-arr.begin();
        //cout<<l<<" "<<r<<endl;
        ll ans=0;
        if(l==r){
            ans=0;
        }else{
            ans=pref[r-1]-(l>0?pref[l-1]:0);
        }
        cout<<ans<<endl;
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
