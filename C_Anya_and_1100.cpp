#include <bits/stdc++.h>

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

void solve(){
    string s;
    cin>>s;
    int q,n=s.size(),cnt=0;
    cin>>q;
    f(i,n-3){
        string t= s.substr(i,4);
        if(t=="1100") cnt++;
    }
    while(q--){
        int i;char v;
        cin>>i>>v;
        i--;
        if(s[i]==v){
            if(cnt>0) cout<<"YES\n";
            else cout<<"NO\n";
            continue;
        }
        int st=max(0,i-3);
        for(int j=st;j<=st+3;j++){
            if(j+3>=n) break;
            string t=s.substr(j,4);
            // cout<<t<<endl;
            if(t=="1100") cnt--;
        }
        s[i]=v;
        for(int j=st;j<=st+3;j++){
            if(j+3>=n) break;
            string t=s.substr(j,4);
            // cout<<t<<endl;
            if(t=="1100") cnt++;
        }
        if(cnt>0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

int main() {
    fast_io();
    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}
