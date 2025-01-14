#include <bits/stdc++.h>
#define int long long
const int mod=998244353;

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


int n,k,ans=0;
string s;
unordered_map<string,bool> m;
string dp[1<<10];

bool is_palindrome(int l,int r,string t){
    if(l>r) return true;

    return t[l]==t[r] && is_palindrome(l+1,r-1,t);
}

bool check(string t){
    f(i,n){
        for(int j=i;j<n;j=j+k){
            string x = t.substr(j,j+k);
            if(m.find(x)!=m.end()) return m[x];
            if(is_palindrome(0,k,x)) return false;
        }
    }
    return true;
}

void rec(int i,string t){
    if(i==n){
        if(check(t)) ans= (ans+1)%mod;
        return;
    }

    if(s[i]=='?'){
        rec(i+1,t+"A");
        rec(i+1,t+"B");
    }else{
        rec(i+1,t+s[i]);
    }
}

signed main() {
    fast_io();
    
    cin>>n>>k;
    
    cin>>s;
    rec(0,"");

    return 0;
}
