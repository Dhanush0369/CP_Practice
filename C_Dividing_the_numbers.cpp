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

vi arr,tem;
int n,sum=0;

void rec(int i,int add){
    if(i==n){
        if(add==sum){
            cout<<tem.size()<<" ";
            for(auto v:tem) cout<<v<<" ";
            exit(0);
        }
        return;
    }

    rec(i+1,add);
    tem.pb(arr[i]);
    rec(i+1,add+arr[i]);
    tem.pop_back();
    
    return;
}

int main() {
    fast_io();

    cin>>n;
    f(i,n) arr.pb(i+1);
    f(i,n) sum+=arr[i];
    sum/=2;
    if(n%4 == 1 || n%4 == 2) {
        cout<<"1\n";
        sum++;
    }
    else cout<<"0\n";
    rec(0,0);
    return 0;
}
