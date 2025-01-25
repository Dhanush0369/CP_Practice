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

int n,sum=0;
vi a;

int rec(int i,vi v){
    if(i==n){
        int sum1=0;
        for(auto x:v){
            sum1+=a[x];
        }
        return max(sum1,sum-sum1);
    }

    int ans=rec(i+1,v);
    v.pb(i);
    ans = min(ans,rec(i+1,v));

    return ans;
}

signed main() {
    fast_io();

    cin>>n;
    a.resize(n);
    f(i,n){
         cin>>a[i];
         sum+=a[i];
    }
    cout<<rec(0,{});
    return 0;
}
