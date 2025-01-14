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

int n,m;
char a[11][11];

int rec(int i,vector<int> t){
    if(i==n){
        f(i,m){
            if(t[i]==0) return 1e9;
        }
        return 0;
    }
    vector<int> t1=t;
    int ans=rec(i+1,t);
    f(x,m){
        if(a[i][x]=='o') t1[x]=1;
    }
    ans = min(ans,1+rec(i+1,t1));

    return ans;
}

signed main() {
    fast_io();
    cin>>n>>m;
    f(i,n) f(j,m){
        cin>>a[i][j];
    }
    vector<int> t(m,0);

    cout<<rec(0,t);
    return 0;
}
