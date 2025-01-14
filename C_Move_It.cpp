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
    int n;
    cin>>n;
    int a[n],w[n],ans=0;
    vi sum(n+1,0),m(n+1,INT_MIN),cnt(n+1,0);
    f(i,n) cin>>a[i];
    f(i,n) cin>>w[i];

    f(i,n){
        sum[a[i]]+=w[i];
        m[a[i]]=max(m[a[i]],w[i]);
        cnt[a[i]]++;
    }
    // fa(i,1,n+1){
    //     cout<<sum[i]<<" "<<m[i]<<" "<<cnt[i]<<endl;
    // }
    fa(i,1,n+1){
        if(cnt[i]==0 || cnt[i]==1) continue;
        else{
            ans = ans+sum[i]-m[i];
            // cout<<sum[i]-m[a[i]]<<endl;
        }
    }
    
    cout<<ans;
    return 0;
}
