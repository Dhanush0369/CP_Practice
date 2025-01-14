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
#define f(i, a, b) for (int i = a; i < b; i++)          // loop from a to b-1
#define rf(i, a, b) for (int i = a; i >= b; i--)        // loop from a to b (reverse)

// Shortcuts for common containers
#define vi vector<int>                  // shorthand for vector of ints
#define vc vector<char>
#define vll vector<long long>           // shorthand for vector of long longs
#define si set<int>                     // shorthand for set of ints
#define mii map<int, int>               // shorthand for map of int to int

// Fast I/O
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    fast_io();
    string s,t,v;
    cin>>s>>t;

    f(i,0,t.size()){
        if(i==t.size()-1){
            if(t[i]=='X') continue;
            else v+=tolower(t[i]);
        }else v+=tolower(t[i]);
        
    }
    // cout<<v<<endl;

    int i=0;

    f(j,0,s.size()){
        if(v[i]==s[j]) i++;
        if(i==v.size()) break;
    }
    if(i==v.size()) cout<<"Yes";
    else cout<<"No";

    return 0;
}
