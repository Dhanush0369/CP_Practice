#include <bits/stdc++.h>
#define int long long
using namespace std;
                  
#define pb push_back                    
#define mp make_pair                     
#define all(v) v.begin(), v.end()        
#define F first                          
#define S second                         
#define endl '\n'                        

// Shortcuts for loops
#define f(i, a) for (int i = 0; i< a; i++)
#define fa(i, a, b) for (int i = a; i < b; i++)          
#define rfa(i, a, b) for (int i = a; i >= b; i--)       

// Shortcuts for common containers
#define vi vector<int>                            
#define si set<int>                      
#define mii map<int, int>                

// Shortcuts for pairs and vector of pairs
#define pii pair<int, int>                

// Fast I/O
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

string s;
vector<vi> dp(100,vi(100,-1));

bool rec(int l,int r){
    if(l>r) return true;

    if(dp[l][r]!=-1) return dp[l][r];

    return dp[l][r]= (s[l]==s[r] && rec(l+1,r-1));
}


signed main() {
    fast_io();
    cin>>s;

    int n=s.size();

    int ans =0;

    f(i,n){
        fa(j,i,n){
            if(rec(i,j)){
                ans =max(ans,j-i+1);
            }
        }
    }

    cout<<ans;
    

    return 0;
}
