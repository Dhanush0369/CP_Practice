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
    int a[n][2];
    f(i,n){
        cin>>a[i][0]>>a[i][1];
    }
    int l=0,r=0;
    vi ans;
    f(i,n){
        l+=a[i][0];r+=a[i][1];
        ans.pb(a[i][0]);
    }
    if(l>0 || r<0) {
        cout<<"No";
        return 0;
    }

    int req=abs(l);
    f(i,n){
        ans[i]+=min(a[i][1]-a[i][0],req);
        req -= min(a[i][1]-a[i][0],req);
        if(req==0) break;
    }
    if(req==0){
        cout<<"Yes\n";
        for(auto v:ans) cout<<v<<" ";
    }else{
        cout<<"No";
    }

    return 0;
}
