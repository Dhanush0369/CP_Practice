#include <bits/stdc++.h>
#define int long long
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
#define fv(v,a) for(auto v:a)
 
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
 
bool check(int n,int k){
    ll cnt1=0,cnt2=0,i=1;
    while(n){
        if(i==1){
            n-=k;
            cnt1+=k;
            if(n<=0) break; 
        }else{
            cnt2+= n/10;
            n -= n/10;
        }
        i=3-i;
    }
    return cnt1>=cnt2;
}
 
void solve(){
    int n;
    cin>>n;
    ll st=1,en=n,ans=0;
    
    while(st<=en){
        ll mid = st+ (en-st)/2;
        if(check(n,mid)){
            ans = mid;
            en=mid-1;
        }else{
            st=mid+1;
        }
    }
    cout<<ans;
}
 
signed main() {
    fast_io();
 
    int t=1;
    // cin >> t;                           // Input number of test cases
    while (t--) {
        solve();
    }
 
    return 0;
}