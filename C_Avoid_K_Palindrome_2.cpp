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

bool check(string s){
    int l=0,r=s.size()-1;
    while(l<r){
        if(s[l]!=s[r]) return false;
        else{
            l++;
            r--;
        }
    }
    return true;
}

void solve(){
    int n,k;
    ll ans=0,cnt=0;
    cin>>n>>k;
    string s;
    cin>>s;
    sort(all(s));
    while(true){
        bool ok =true;
        f(i,n-k+1){
            string t= s.substr(i,k);
            if(check(t)){
                ok=false;
                break;
            }
        }
        if(ok) ans++;
        if(!(next_permutation(all(s)))) break;
    }
    cout<<ans<<" ";

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
