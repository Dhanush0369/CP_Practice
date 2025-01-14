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

int n;

vector<vector<char>> a;

void rec(int i,int j){
    if(i==1 || j==1) return;

    int x1=i/3 +1,y1=j/3+1;
    int x2=x1+i,y2=y2+j;

    for(int x=1;x<=i;x=x+i/3){
        for(int y=1;y<=j;y=y+j/3){
            if(x==x1 && y==y1){
                fa(p,x1,x2){
                    fa(q,y1,y2){
                        a[p][q]='.';
                    }
                }
            }else rec(x,y);
        }
    }
}

signed main() {
    fast_io();
    
    cin>>n;
    n = 3*n;
    a.assign(n+1,vector<char>(n+1,'#'));

    rec(n,n);
    fa(i,1,n+1) fa(j,1,n+1) cout<<a[i][j];
    return 0;
}
