#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define endl "\n"
#define debug(x) cout << "debug: " << x << endl;
#define F first
#define S second
#define pb push_back
#define mp make_pair

#define f(i, a, b) for (int i = a; i < b; ++i)
#define rf(i, a, b) for (int i = a; i >= b; --i)
// << fixed << setprecision(9)

#define vi vector<int>
#define vll vector<ll>
#define vpii vector<pair<int, int>>
#define vpll vector<pair<ll, ll>>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mii map<int, int>
#define mll map<ll, ll>
#define si set<int>
#define sll set<ll>
#define usi unordered_set<int>
#define umii unordered_map<int, int>

const int N = 1e5 + 10;
const double pi = 3.1415926536;
const int inf = 1e9 + 10;
const int mod = 1e9 + 7;

/*
 2 _ 4
*/

void solve() {
    int n,m;
    cin >> n >> m;
    int x[m];
    f(i, 0, m) cin >> x[i];
    mll mp;
    f(i, 0, m){
        int a;
        cin >> a;
        mp[x[i]]=a;
    }
    if(mp.find(n)==mp.end()) mp[n]=0;
    auto it = mp.begin();
    it++;
    ll ans =0;
    for(auto cur = mp.begin(); it != mp.end(); cur++, it++){
        ll available = it->F - cur->F -1;
        if(available > cur->S -1){
            cout << -1 ;
            return;
        }else{
            ans += available*(available+1)/2;
            ll tranfer = cur->S-1 - available;
            ans += (available+1)*tranfer;
            it->S += tranfer;
        }
    }
    if(mp[n]==1) cout << ans;
    else cout << -1;
}

int main() {
    IOS
    // int t; cin >> t; while(t--)
    solve();
    return 0;
}