#include <bits/stdc++.h>
#define int long long

#define ll long long                   // shorthand for long long
#define pb push_back                    // shorthand for push_back
#define mp make_pair                    // shorthand for make_pair
#define all(v) v.begin(), v.end()       // shorthand for range all elements
#define F first                         // shorthand for pair.first
#define S second                        // shorthand for pair.second
#define endl '\n'                       // shorthand for newline

// Shortcuts for loops
#define f(i, a) for(int i=0; i<a; i++)
#define fa(i, a, b) for (int i = a; i < b; i++)          // loop from a to b-1
#define rf(i, a, b) for (int i = a; i >= b; i--)        // loop from a to b (reverse)

// Shortcuts for common containers
#define vi vector<int>                  // sho#include <bits/stdc++.h>
using namespace std;

#define ll long long                   // shorthand for long long
#define pb push_back                    // shorthand for push_back
#define mp make_pair                    // shorthand for make_pair
#define all(v) v.begin(), v.end()       // shorthand for range all elements
#define F first                         // shorthand for pair.first
#define S second                        // shorthand for pair.second
#define endl '\n'                       // shorthand for newline

// Fast I/O
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

signed main() {
    fast_io();
    int n,m,ans=0,p=-1;
    cin>>n>>m;
    vector<int> a(n),b(m);
    f(i,n) cin>>a[i];
    f(i,m) cin>>b[i];
    sort(all(a));
    sort(all(b));

    f(i,m){
        auto j = lower_bound(a.begin()+p+1,a.end(),b[i]);
        if(j==a.end()){
            cout<<"-1";
            return 0;
        }else{
            ans+=a[j-a.begin()];
            p= j-a.begin();
        }
    }
    cout<<ans;

    return 0;
}
