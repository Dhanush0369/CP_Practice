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

int check(char c){
    if(c=='P') return 0;
    else if(c=='R') return 1;
    else return 2;
}

int num(char c){
    if(c=='S') return 0;
    else if(c=='P') return 1;
    else return 2;
}

int n;
string s;
vector<vector<ll>> dp;

ll rec(int i,int last){
    if(i==n){
        return 0;
    }

    if(dp[i][last]!=-1) return dp[i][last];

    ll ans = 0;
    if(i==0){
        ans = max(rec(i+1,num(s[i])),1 + rec(i+1,check(s[i])));

    }
    else if(last == check(s[i])){
        ans = max(ans,rec(i+1,num(s[i])));
    }else if(last == num(s[i])){
        ans = max(ans,1+rec(i+1,check(s[i])));
    }else{
        ans = max(rec(i+1,num(s[i])),1 + rec(i+1,check(s[i])));
    }
    
    return dp[i][last]=ans;
}

int main() {
    fast_io();

    cin>>n;
    cin>>s;
    dp.assign(n,vll(3,-1));
    cout<<rec(0,0);
    return 0;
}
