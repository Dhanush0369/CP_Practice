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

bool c(int l1,int r1,int l2,int r2){
    return !(r1<=l2 || r2<=l1);
}

signed main() {
    fast_io();
    int x1,x2,x3,x4,y1,y2,y3,y4,z1,z2,z3,z4;
    cin>>x1>>y1>>z1>>x2>>y2>>z2;
    cin>>x3>>y3>>z3>>x4>>y4>>z4;
    
    if(c(x1,x2,x3,x4) and c(y1,y2,y3,y4) and c(z1,z2,z3,z4)) cout<<"Yes";
    else cout<<"No";
    
    return 0;
}
