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
#define f(i, a) for(int i=0; i<a; i++)
#define fa(i, a, b) for (int i = a; i < b; i++)          // loop from a to b-1
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
    int n;
    cin>>n;
    int a[n];
    vector<pair<int,int>> cost;
    f(i,n){
        int x;
        cin>>a[i]>>x;
        cost.push_back({x,i});
    }
    int v=0;
    
    set<int> s;
    sort(all(cost));
    f(i,n){
        if(a[cost[i].S]>v){
            s.insert(cost[i].S+1);
            v=a[cost[i].S];
        }
    }
    cout<<s.size()<<endl;
    for(auto v:s) cout<<v<<" ";
    return 0;
}
